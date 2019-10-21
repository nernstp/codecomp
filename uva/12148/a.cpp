#include <iostream>
#include <vector>
using namespace std;

int monsEnd[]={31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int n;
    while(cin>>n&&n){
        
    int d,m,y,c,d2,m2,y2,c2;
    cin>>d>>m>>y>>c;
    int count=0;
    int total=0;
    for(int i=1;i<n;i++){
        cin>>d2>>m2>>y2>>c2;
        if((!(y%4)&&y%100)||!(y%400))
            monsEnd[1]=29;
        else
            monsEnd[1]=28;

        if(++d>monsEnd[m-1]){
            d=1;
            m++;
            if(m>12){
                m=1;
                y++;
            }
        }
        if(d==d2&&m==m2&&y==y2){
            total+=(c2-c);
            count++;
        }
        d=d2;
        m=m2;
        y=y2;
        c=c2;


    }
    cout<<count<<" "<<total<<endl;
    }
    return 0;
}