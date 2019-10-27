#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;


int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        long long n;
        cin>>n;
        
        long long t=n;
        vector<int> nums;
        int idx2=-1;

        long long threes=1;
        while(t){
            if((t%3)==2)
                idx2=nums.size();
            nums.push_back(t%3);

            t/=3;  
        }
        if(idx2<0)
            cout<<n<<endl;
        else{
            nums.push_back(0);
            long long sum=0;
            for(int j=0;j<=idx2;j++){
                nums[j]=0;
                

                threes*=3;
            }
            int j=idx2+1;
            while(nums[j]){
                 nums[j]=0;
                 threes*=3;
                 j++;
            }
            nums[j]=1;

            while(j<nums.size()){
                
                sum+=threes*nums[j];
                threes*=3;
                
                j++;

            }
            cout<<sum<<endl;
            
            
        }
    }
    
    return 0;
}