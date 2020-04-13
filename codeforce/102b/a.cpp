#include <iostream>
#include <string>

using namespace std;

int main(){
    string n;
    cin>>n;
    long long total=0;
    int time=0;
    while(n.length()>1){
        for(int i=0;i<n.length();i++)
            total+=n[i]-'0';
        n=to_string(total);
        total=0;
        time++;
    }
    cout<<time;
    
    return 0;
}