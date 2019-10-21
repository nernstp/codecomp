#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> one,two,three;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t==1)
            one.push_back(i);
        else if(t==2)
            two.push_back(i);
        else
            three.push_back(i);
    }
    int m=min(one.size(),min(two.size(),three.size()));
    cout<<m<<endl;
    for(int i=0;i<m;i++)
        cout<<one[i]+1<<" "<<two[i]+1<<" "<<three[i]+1<<endl;
    
    
      
    return 0;
}