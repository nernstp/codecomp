#include <iostream>

using namespace std;


int main(){
    int p,c;
    cin>>p>>c;
    int r=10;
    p%=10;
    for(int i=1;i<=10;i++){
        if((p*i)%10==0||(p*i)%10==c){
            r=i;
            break;
        }
    }
    cout<<r;
    
    
    return 0;
}

