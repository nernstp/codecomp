#include <iostream>

using namespace std; 

int main(){
    long long n,k;
    cin>>n>>k;
    long long h=++n/2;
    if(k<=h)
        cout<<k*2-1;
    else
        cout<<(k-h)*2;
    
    return 0;
}