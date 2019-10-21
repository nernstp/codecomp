#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    /*vector<vector<long long>> result;
    for(int i=0;i<n;i++){
        vector<long long>  r(n);
        result.push_back(r);
        for(int j=0;j<n;j++){
            if(i!=j)
                result[i][j]=LLONG_MAX;
            else
                result[i][j]=0;
        }
    }*/
    vector<pair<int,pair<int,int>>> e;
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        e.push_back(make_pair(w,make_pair(a,b)));
        
        //result[a-1][b-1]=w;
        //result[b-1][a-1]=w;
    }
    sort(e.begin(),e.end());
    
    vector<int> vs;
    
    for(int i=0;i<min(m,k);++i){
        vs.push_back(e[i].second.first);
        vs.push_back(e[i].second.second);
     }
    sort(vs.begin(),vs.end());
     
    int newv=unique(vs.begin(),vs.end())-vs.begin();
    vs.resize(newv);
     
    vector<vector<long long>> d(newv,vector<long long>(newv,LLONG_MAX));
    for(int i=0;i<newv;++i)
        d[i][i]=0;
     
    for(int i=0;i<min(m,k);++i){
        int x=lower_bound(vs.begin(),vs.end(),e[i].second.first) - vs.begin();
        int y=lower_bound(vs.begin(),vs.end(),e[i].second.second) - vs.begin();
        
        
        d[x][y]=d[y][x]=e[i].first;
            
        
    }
    
     
    
    for(int p=0;p<newv;++p){
        for(int i=0;i<newv;++i){
            for(int j=0;j<newv;++j){
                long long temp;
                if(d[i][p]==LLONG_MAX||d[p][j]==LLONG_MAX)
                    temp=LLONG_MAX;
                else
                    temp=d[i][p]+d[p][j];
                d[i][j]=min(d[i][j],temp);
            }
            
        }
            
    }
    
    /*for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
    }*/
    vector<long long> f;
    for(int i=0;i<newv;i++){
        for(int j=i+1;j<newv;j++){
            f.push_back(d[i][j]);
            
        }
    }
    sort(f.begin(),f.end());
    //for(int i=0;i<f.size();i++)
        cout<<f[k-1]<<" ";
    return 0;
}