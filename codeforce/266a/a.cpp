#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int i=0;
    while(i++<n){
        if(s[i-1]==s[i])
            count++;
        
    }
    cout<<count;

    return 0;
}