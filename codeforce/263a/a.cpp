#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,y;
    bool c=true;
    for(int i=0;i<5&&c;++i){
        for(int j=0;j<5&&c;++j){
            int t;
            cin>>t;
            if(t){
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);
    return 0;
}