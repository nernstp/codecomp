#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string t;
    cin>>t;
    int a=0;
    int d=0;
    
    for(int i=0;i<n;++i){
        if(t[i]=='A')
            a++;
        else
            d++;
    }
    
    if(a==d)
        cout<<"Friendship";
    else if(a>d)
        cout<<"Anton";
    else
         cout<<"Danik";
    
    
    return 0;
}