#include <iostream>
#include <vector> 

using namespace std;

int total=0;
vector<bool> vis;
vector<vector<int> > grid;


int dfs(int i){
    vis[i]=true;
    int r=0;
    for(int j=0;j<grid.size();j++){
        if(grid[j][i]==1&&!vis[j])
            r=dfs(j);
        
    }
    return 1+r;
    
    
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
    int result=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            result=dfs(i);
            
        }
        total+=(result%2)*(result>1);
        result=0;
    }
    cout<<total;
    
    return 0;
}