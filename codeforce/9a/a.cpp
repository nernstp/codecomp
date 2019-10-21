#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 


int main() {
    int t;
    int n;
    cin>>t>>n;
    n=max(t,n);
    n=6-n+1;
    int d=6;
    if(!n)
        cout<<"0/1";
    else{
        int g=gcd(n,d);
        cout<<n/g<<"/"<<d/g;
            
        
    }
    
    
    return 0;
}