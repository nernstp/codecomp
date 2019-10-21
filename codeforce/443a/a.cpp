#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    char a[1000];
    cin.getline(a,1000);
    vector<int> v(26,0);
    for(int i=1;i<1000-1&&a[i]!='}';i++)
        if(a[i]>='a'||a[i]<='z')
            v[a[i]-'a']++;
    int c=0;
    for(int i=0;i<26;i++)
        if(v[i]>0)
            c++;
    cout<<c;
    return 0;
}