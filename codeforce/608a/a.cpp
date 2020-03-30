#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    s--;
    vector<int> list(n,0);
    for(int i=0;i<n;i++)
        cin>>list[i];
    int i=1;
    int total=list[s];
    while(s-i>=0||s+i<n){
        int t=0;
        if(s-i<0)
            t=list[s+i];
        else if(s+i>=n)
            t=list[s-i];
        else
            t=(list[s+i]+list[s-i])/2*2;
        total+=t;
        i++;
    }
    cout<<total;
    
    return 0;
}


