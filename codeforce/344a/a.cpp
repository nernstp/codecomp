#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int group=1;
    while(n--){
        string t;
        cin>>t;
        if(!s.empty()&&t!=s)
            group++;
        s=t;
    }
    cout<<group;

    return 0;
}