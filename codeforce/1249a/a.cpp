#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        vector<int> list(n);
        for(int j=0;j<n;j++)
            cin>>list[j];
        sort(list.begin(),list.end());
        bool r=false;
        for(int j=0;j<n-1;j++){
            if(list[j+1]-list[j]==1)
                r=true;
            
        }
        if(r)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    
    
    return 0;
}