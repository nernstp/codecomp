#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ax,ay,bx,by;
    cin>>ax>>ay;
    double result=0;
    for(int i=1;i<n;i++){
        cin>>bx>>by;
        result+=sqrt(pow(abs(ax-bx),2)+pow(abs(ay-by),2));
        ax=bx;
        ay=by;
    }
    cout.precision(10);
    cout<<k*result/50;
    return 0;
}