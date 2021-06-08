#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int tx,ty,tz;
    tx=ty=tz=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        tx+=x;
        ty+=y;
        tz+=z;
    }
    if(!tx&&!ty&&!tz)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}