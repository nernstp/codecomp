#include <iostream>
#include <vector>
using namespace std;

int main(){
    int q; 
    cin>>q;
    for(int i=0;i<q;i++){
        int n,k;
        cin>>n>>k;
        vector<int> list;
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            list.push_back(t);
            
          
        }
        vector<int> result;
        int curr=0;
        int j=0;
        int tk=k;
        for(j=0;j<n;j++){

            if(tk>1){
                curr+=list[j];
                if(curr%2){
                    result.push_back(j+1);
                    curr=0;
                    tk--;
                }
            }
            else{
                curr+=list[j];
                if(j==n-1){
                    if(curr%2)
                        result.push_back(j+1);
                }
               
            }
                
            
        }
        if(result.size()==k){
            cout<<"YES"<<endl;
            for(int m=0;m<result.size();m++){
                cout<<result[m]<<" ";
                
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
            
        
    }
    
    return 0;
}