#include <iostream>
using namespace std;

int main(){
    
    int r=0;
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        if(t)
            r=max(r,--t/2*3+i);
    }
    cout<<r+30;
    
    return 0;
}