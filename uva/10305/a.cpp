#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> rel;
vector<bool> vis;
vector<int> result;
void dfs(int i){
    vis[i]=true;
    for(int j=0;j<rel.size();j++)
        if(rel[j][i]==1&&!vis[j])
            dfs(j);
    result.push_back(i+1);
}

int main(){
    int n,m;
    while(cin>>n>>m&&n){
        rel.assign(n,vector<int>(n));
        vis.assign(n,false);
        result.clear();
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            rel[a-1][b-1]=1;
        }
        for(int i=0;i<n;i++)
            if(!vis[i])
                dfs(i);
        for(int i=0;i<n;i++)
            cout<<result[i]<<" \n"[i == result.size() - 1];
    }
    return 0;
}