#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    vector<pair<long long,long long> > list;

    for(int i=0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        list.push_back(make_pair(b,a));
    }
    sort(list.begin(),list.end());
    long long total=0;
    int i=m-1;
    while(i>=0&&n>=list[i].second){
        total+=list[i].first*list[i].second;
        n-=list[i].second;
        i--; 
    }
    if(n&&i>=0)
        total+=n*list[i].first;
    cout<<total;   
        
    return 0;
}