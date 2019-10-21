#include <iostream>
#include <iomanip>
using namespace std;

int gcd(int a, int b){
    if(a==b)
        return a;
    else if(!a)
        return b;
    else if(!b)
        return a;
    else if(a>b)
        return gcd(a-b,b);
    else
        return gcd(b-a,a);
}

int main(){
    int a,b;
    while(cin>>a>>b){
        int result=gcd(a,b);
        cout<<setw(10)<<a<<setw(10)<<b<<"    ";
        if(result>1)
            cout<<"Bad Choice";
        else
            cout<<"Good Choice";
        cout<<endl<<endl;
    }
    return 0;
}