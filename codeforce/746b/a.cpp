#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    if(s.size()>1){
        int i=s.size()-2;
        while(i>=0){
            cout<<s[i];
            i-=2;
        }
        i=!(s.size()%2);
        
        while(i<s.size()){
            cout<<s[i];
            i+=2;
        }
    }
    else
        cout<<s;
    return 0;
}