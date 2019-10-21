#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int ml,md,mu,mr;
        ml=md=-100000;
        mu=mr=100000;
        bool con=true;
        for(int j=0;j<n;j++){
            //  Left  Up  Right Down
            int x,y;
            cin>>x>>y;
            bool l,u,r,d;
            cin>>l>>u>>r>>d;
            
            if(!l){
                if(x>mr){
                    con=false;
                }
                else
                    ml=max(x,ml);
                
            }
            if(!u){
                if(y<md){
                    con=false;
                }
                else
                    mu=min(y,mu);
                    
            }
            if(!r){
                if(x<ml){
                    con=false;
                                       
                }
                else
                    mr=min(x,mr);
            }
            if(!d){
                if(y>mu){
                    con=false;
                }
                else
                    md=max(y,md);
                
            }
                
            
            
            
        }
        if(con&&ml<=mr&&mu>=md)
            cout<<1<<" "<<ml<<" "<<md<<endl;
        else
            cout<<0<<endl;
    
    
    }
    
    
    
    return 0;
}