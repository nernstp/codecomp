#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> list(n);
    for(int i=0;i<n;i++)
        cin>>list[i];
    for(int i=0;i<n;i++){
        if(!i)
            cout<<list[i+1]-list[i]<<" "<<list[n-1]-list[i]<<endl;
        else if(i==n-1)
            cout<<list[i]-list[i-1]<<" "<<list[i]-list[0]<<endl;
        else{
            cout<<min(list[i]-list[i-1],list[i+1]-list[i])<<" "<<max(list[i]-list[0],list[n-1]-list[i])<<endl;
            
        }
    }
    
    return 0;
}