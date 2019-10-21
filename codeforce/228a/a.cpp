#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> list(4,0);
    for(int i=0;i<4;i++)
        cin>>list[i];
    sort(list.begin(),list.end());
    vector<int>::iterator it;
    it=unique(list.begin(),list.end());
    list.resize(distance(list.begin(),it));
    cout<<4-list.size();
    
    
    
    return 0;
}