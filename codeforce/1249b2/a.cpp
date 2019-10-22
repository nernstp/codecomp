#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>

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
        for(int j=0;j<n;j++){
            int r=j;
            int count=1;
            while(list[r]-1!=j){
                r=list[r]-1;
                count++;
            }
            cout<<count<<" ";
                
        }
        cout<<endl;
    }
    
    return 0;
}