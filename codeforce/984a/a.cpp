#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> list;
    
    while(n>0){
        int t;
        cin>>t;
        
        list.push_back(t);
        
        n--;
    }
    sort(list.begin(),list.end());
    if(list.size()%2)
        cout<<list[list.size()/2];
    else
        cout<<list[list.size()/2-1];
    
    return 0;
    
}

