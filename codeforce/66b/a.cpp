#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> list(n,0);
    
    for(int i=0;i<n;++i)
        cin>>list[i];
    
    int m=0;
    for(int i=0;i<n;++i){
        int v=1;
        int j=i+1;
        while(j<n&&list[j]<=list[j-1]){
            ++v;
            ++j;
        }
        j=i-1;
        while(j>=0&&list[j]<=list[j+1]){
            ++v;
            --j;
        }
        m=max(m,v);
    }
    cout<<m;
  
    return 0;
}