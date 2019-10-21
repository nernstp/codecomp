#include <iostream>
#include <string>
using namespace std;

int main(){
    string input,c;
    cin>>input>>c;
    int pos=0;
    for(int i=0;i<c.length();i++)
        if(c[i]==input[pos])
            pos++;
    cout<<pos+1;
    return 0;
}