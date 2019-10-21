#include <iostream>
#include <string>

using namespace std;


bool list[26]{false};

int main(){
    int n;
    cin>>n;
    string input;
    cin>>input;
    for(int i=0;i<n;i++)
        list[tolower(input[i])-'a']=true;
    bool r=true;
    for(int i=0;i<26;i++)
        r&=list[i];
    if(r)
        cout<<"YES";
    else
        cout<<"NO";
        

    return 0;
    
}