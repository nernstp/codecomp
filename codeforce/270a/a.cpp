#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        
        if(!(360%(180-a)))
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    
    return 0;
}

