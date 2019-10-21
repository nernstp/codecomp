#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i=0;i<n;i++){
        long long num=0;
        for(int j=0;j<3;j++){ 
            long long t;
            cin>>t;
            num+=t;
        
        }
        cout<<num/2<<endl;
        
        
    }
    
    return 0;
}