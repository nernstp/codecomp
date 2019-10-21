#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 


int main(){
    int n;
    cin>>n;
    vector<int> g(n,0);
    for(int i=0;i<n;i++)
        cin>>g[i];
    int m;
    cin>>m;    
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        if(x>1)
            g[x-2]+=y-1;
        if(x<n)
            g[x]+=max(g[x-1]-y,0);
        g[x-1]=0;
    }
    for(int i=0;i<n;i++)
        cout<<g[i]<<endl;
    
    
    return 0;
}