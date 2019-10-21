#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    ll n=0;
    cin>>n;
    while(n){
        ll t=sqrt(n);
        if(t*t==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;    

        cin>>n;
    }

    return 0;
}


