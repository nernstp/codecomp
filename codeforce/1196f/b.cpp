#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    //vector<vector<long long>> result;
    long long** result;
    result=(long long**)malloc(sizeof(long long*)*n);
    for(int i=0;i<n;i++){
        result[i]=(long long*)malloc(sizeof(long long)*n);
        //result.push_back(r);
        for(int j=0;j<n;j++){
            if(i!=j)
                result[i][j]=LLONG_MAX;
            else
                result[i][j]=0;
        }
    }
    
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        result[a-1][b-1]=w;
        result[b-1][a-1]=w;
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long temp;
                if(result[i][k]==LLONG_MAX||result[k][j]==LLONG_MAX)
                    temp=LLONG_MAX;
                else
                    temp=result[i][k]+result[k][j];
                result[i][j]=min(result[i][j],temp);
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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            f.push_back(result[i][j]);
            
        }
    }
    sort(f.begin(),f.end());
    //for(int i=0;i<f.size();i++)
        cout<<f[k-1]<<" ";
    return 0;
}