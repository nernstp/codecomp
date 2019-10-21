#include <iostream>
#include <cmath>
#include <string>
#define ll long long
#define mn 998244353
using namespace std;

int main(){
    //cout<<pow(10,9)<<endl;
    int n;
    cin>>n;
    int result=0;
    int count=0;
    for(int i=0;i<n;i++){
        int t;
        int length;
        string temp;
        cin>>temp;
        length=temp.length();
        t=stoi(temp);
        count=0;
        for(int j=0;j<length;j++{
            int s=t%10;
            t/=10;
            result+=(pow(10,j)%mn)*s;
            
            
        }
        
        
        
        
        
    }
    
    
    return 0;
}