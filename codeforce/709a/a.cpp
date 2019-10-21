#include <iostream>

using namespace std;

int main(){
    int c=0;
    int e=0;
    int n,b,d;
    cin>>n>>b>>d;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t<=b)
            c+=t;
        if(c>d){
            e++;
            c=0;
        }
        
    }
    cout<<e;
    
    return 0;
}