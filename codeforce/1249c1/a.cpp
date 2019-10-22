#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> threes;
const int l=10000;
vector<int> list;
int main(){
    list.push_back(1);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int j=0;
        while(pow(3,j)<l){
            threes.push_back(pow(3,j));
            j++;
            
        }
        int k=1;
        while(list[list.size()-1]<n){
            int sum=0;
            int p=1;
            for(int m=k;m>0;k>>=1){
                if(m&&1){
                    sum+=threes[p];
                    
                }
                p++;
            }
                
            list.push_back(sum);
            k++;
        }
        cout<<list[list.size()-1]<<endl;
        
    }
    
    return 0;
}