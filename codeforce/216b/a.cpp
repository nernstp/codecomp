#include <iostream>
#include <vector> 

using namespace std;

int total=0;
vector<bool> vis;
vector<vector<int> > grid;

pair<int,int> dfs(int i){
    vis[i]=true;
    pair<int,int> r=make_pair(0,0);
    int edge=0;
    for(int j=0;j<grid.size();j++){
        edge+=grid[j][i];
        if(grid[j][i]==1&&!vis[j]){
            pair<int,int> t=dfs(j);
            r=make_pair(r.first+t.first,r.second+t.second);
        }
    }
    return make_pair(r.first+edge,r.second+1);
}

int main(){
    int n,m;
    cin>>n>>m;
    grid.assign(n,vector<int>(n,0));
    vis.assign(n,false);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        grid[a-1][b-1]=1;
        grid[b-1][a-1]=1;
    }
    pair<int,int> result=make_pair(0,0);
    for(int i=0;i<n;i++){
        if(!vis[i])
            result=dfs(i);
        if(result.first/2==result.second&&result.second&&result.second%2)
            total++;
        result=make_pair(0,0);
    }
    total+=(n-total)%2;
    cout<<total;
    return 0;
}