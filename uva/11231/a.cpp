#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    while(cin>>a>>b>>c&&a){
        int result;
        result=(a*2-13)/2*((b-7)/2);
        if((b-7)%2)
            result+=(a-6-!c)/2;
        cout<<result<<endl;
    }
    return 0;
}