#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> as(5,0);
    string in;
    long long total=0;
    for(int i=1;i<5;i++)
        cin>>as[i];
    cin>>in;
    for(int i=0;i<in.length();i++)
        total+=as[in[i]-'0'];
    cout<<total;
    return 0;
}