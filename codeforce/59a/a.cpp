#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin>>a;
    int count=0;
    for(int i=0;i<a.length();i++)
        if(a[i]<='Z')
            count++;
    if(count>a.length()-count)
        for(int i=0;i<a.length();i++)
            a[i]=toupper(a[i]);
    else
        for(int i=0;i<a.length();i++)
            a[i]=tolower(a[i]);
        
    cout<<a;

    return 0;
}