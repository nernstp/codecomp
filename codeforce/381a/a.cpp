#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> list(n);
    for(int i=0;i<n;i++)
        cin>>list[i];
    int l=0;
    int r=n-1;
    int s1=0;
    int s2=0;
    bool f=true;
    while(l<=r){
        int t;
        if(list[l]>list[r])
            t=list[l++];
        else
            t=list[r--];
        if(f)
            s1+=t;
        else
            s2+=t;
        f=!f;
    }
    cout<<s1<<" "<<s2;

    return 0;
}