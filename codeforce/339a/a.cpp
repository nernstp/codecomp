#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string in;
    cin>>in;
    vector<int> list;
    for(int i=0;i<in.length();i++){
        if(in[i]!='+')
            list.push_back(in[i]-'0');
    }
    sort(list.begin(),list.end());
    cout<<list[0];
    for(int i=1;i<list.size();i++)
        cout<<'+'<<list[i];
    return 0;
}