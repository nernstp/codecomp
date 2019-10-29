#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool mycomp (pair<int,int> i,pair<int,int> j) { return (i>j); }


typedef struct segment{
    int start=0;
    int end=0; 
    int id=0;
    
}segment;

int main(){
    int n,k;
    cin>>n>>k;
    vector<segment> seg;
    int left=199999;
    int right=0;
    vector<int> node(200000,0);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        left=min(a-1,left);
        right=max(b-1,right);
        node[a-1]+=1;
        if(b<200000)
            node[b]-=1;
        segment t;
        t.start=a;
        t.end=b;
        t.id=i;
        seg.push_back(t);
    }
    cout<<endl;
    int nums=0;
    vector<pair<int,int>> over;
    
    for(int j=left;j<=right;j++){
        nums+=node[j];
        over.push_back(make_pair(nums,j));
        cout<<j+1<<" "<<nums<<endl;
    }
    sort(over.begin(),over.end(),mycomp);
    cout<<endl;
    vector<int> ans;
    
    
    
    for(int j=0;j<over.size();j++){
        cout<<over[j].second+1<<" "<<over[j].first<<endl;
    }
    
    return 0;
}