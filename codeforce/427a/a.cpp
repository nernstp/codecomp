#include <iostream>

using namespace std;
 
 int main(){
     
     int p=0;
     int a=0;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int t;
         cin>>t;
         if(t>0)
             p+=t;
         else{
             if(p==0)
                 a++;
             else
                 p--;
             
         }
         
     }
     cout<<a;
     return 0;
 }