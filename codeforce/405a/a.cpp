#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> l(n,0);
    for(int i=0;i<n;++i)
        cin>>l[i];
    sort(l.begin(),l.end());
    for(int i=0;i<n;++i)
        cout<<l[i]<<" ";


    return 0;

}