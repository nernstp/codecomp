
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int size=a.length();
    int r=0;
    for(int i=0;i<size&&!r;++i){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        

    }
    r=a.compare(b);
    cout<<r;
    return 0;
}