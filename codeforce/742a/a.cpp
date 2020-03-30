#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<int> l={6,8,4,2};
    if(!n)
        cout<<"1";
    else
        cout<<l[n%4];
    return 0;
}