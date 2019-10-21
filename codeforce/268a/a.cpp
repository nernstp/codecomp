#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int> h(n,0);
    vector<int> g(n,0);
    for(int i=0;i<n;i++)
        cin>>h[i]>>g[i];
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(h[i]==g[j])
                c++;
            if(g[i]==h[j])
                c++;
        }
    }
    cout<<c;
    
    return 0;
}