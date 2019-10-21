#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    
    char s='a';
    int count=0;
    string in;
    cin>>in;
    
    for(int i=0;i<in.length();i++){
        int t=abs(in[i]-s);
        t=min(t,26-t);
        count+=t;     
        
        s=in[i];
    }
    cout<<count;
    
    return 0;
}