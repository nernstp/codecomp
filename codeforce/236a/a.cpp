#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin>>a;
    bool c[26] {false};
    for(int i=0;i<a.length();i++)
        c[a[i]-'a']=true;
    int count=0;
    for(int i=0;i<26;i++)
        if(c[i])
            count++;
    if(count%2)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}