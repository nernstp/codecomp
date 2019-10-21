#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

const int M=600;

int main(){
    string a,b;

    while(cin>>a){
        cin>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int n=a.length();
        int m=b.length();
        int mn=m+n;
        vector<ll> r(M,0);
        for(int i=0;i<n;i++){
            
            int c=0;
            for(int j=0;j<m;j++){
                int x=a[i]-'0';
                int y=b[j]-'0';
                r[i+j]=x*y;
            }
        }
        for(int i=0;i<(mn-1);i++){
            a[i+1]+=a[i]/10;
            a[i]%=10;
        }

        int i=mn-1;
        while(i>0&&r[i]==0){
            i--;


        }
        for(;i>=0;i--)
            cout<<r[i];
        
        cout<<endl;
    }
    return 0;
}
