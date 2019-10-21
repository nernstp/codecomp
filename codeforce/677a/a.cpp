#include <iostream>


using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int sum=0;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        if(t>h)
            sum+=2;
        else
            sum+=1;
    }
    cout<<sum;
    
    
    return 0;
}