#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

vector<long long> threes;
const long long l=1000000000000000000;
vector<long long> list;
int main(){
    // list.push_back(1);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int j=0;
        while(pow(3,j)<=l){
            threes.push_back(pow(3,j));
            cout<<pow(3,j)<<" ";
            j++;
        }
        cout<<endl;
        long long k=1;
        while(list.empty()||list[list.size()-1]<n){
            bitset<64> a(k);
            long long sum=0;
            for(int m=0;m<a.size();m++){
                sum+=a[m]*threes[m];
                
            }
            list.push_back(sum);
            k++;
        }
        
        
        // while(list[list.size()-1]<n){
            // int sum=1;
            // int p=1;
            // for(int m=k;m>0;k/=2){
                // if(m&&1){
                    // sum+=threes[p];
                    
                // }
                // p++;
            // }
                
            // list.push_back(sum);
            // k++;
        // }
        
        
        
        
        cout<<list[list.size()-1]<<endl;
        
    }
    
    return 0;
}