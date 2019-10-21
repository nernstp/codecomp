#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b;
    //cin>>a>>b;
    //int n=a.length();
    // cout<<char(49);
    while(cin>>a){
        cin>>b;
        int n=a.length();
        string r(a.length()+b.length(),' ');
        while(n--){
            int m=b.length();
            int c=0;
            while(m--){
                    int x=a[n]-'0';
                    int y=b[m]-'0';
                    string t=to_string(x*y);
                    //cout<<t<<endl;
                    c=(x*y+c)/10;
                    int o=t.length()-1;
                    int cc=0;
                    while(o>=0||cc){
                        
                        
                        int pos=a.length()+b.length()-1-b.length()+m+1-a.length()+n+1-t.length()+o+1;
                        //cout<<pos<<endl;
                        int p=0;
                        if(o>=0)
                            p=t[o]-'0';
                        int q=0; 
                        if(r[pos]!=' ')
                            q=r[pos]-'0';
                        //cout<<p<<q;
                        r[pos]=char('0'+(p+q+cc)%10);
                        cc=(p+q+cc)/10;
                        o--;
                        /*
                        if(r[o+n]==' ')
                            r[o+n]=t[o];
                        else{
                            r[o+n]=char(((t[o]-'0')+(r[o+n]-'0')+c)%10);
                            c=((t[o]-'0')+(r[o+n]-'0'))/10;
                            */
                        }
                        //cout<<r<<endl;
                    }
                    //r=to_string((x+y+c)%10)+r;
                    //c=(x+y+c)/10;
            
            
        }
        string::iterator it=r.begin();
        while(r.length()>1&&(*it==' '||*it=='0')){
            r.erase(it);
            //it++;
         }
        cout<<r<<endl;
        //r.clear();
    }
    return 0;
}
