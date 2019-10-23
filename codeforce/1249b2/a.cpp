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

        vector<int> result(n,0);
        for(int j=0;j<n;j++){
            vector<int> same;
            int count=1;
            int k=j;
            same.push_back(j);
            if(!result[j]){
                while(list[k]-1!=j){
                    count++;
                    same.push_back(list[k]-1);
                    k=list[k]-1;
                }
            }
            
            for(int k=0;k<same.size();k++){
                if(!result[same[k]]){
                    result[same[k]]=count;
                }
            }
        }
        for(int j=0;j<n;j++)
            cout<<result[j]<<" ";
        cout<<endl;
    }
    
    return 0;
}