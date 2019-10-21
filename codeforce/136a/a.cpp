#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> list(n);
    for(int i=0;i<n;i++){
         int t;
         cin>>t;
         list[t-1]=i+1;
       
    }
    for(int i=0;i<n;i++)
        cout<<list[i]<<" ";
    return 0;
}