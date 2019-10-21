#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    while(n>0){
        int t;
        cin>>t;
        if(t){
            cout<<"HARD";
            return 0;
        }
         
        n--;
    }
    cout<<"EASY";
    
    return 0;
}