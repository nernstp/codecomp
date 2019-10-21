#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <string>
using namespace std;

int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

int main(){
    int count=1;
    int n;
     while(cin>>n)   {
        vector<vector<int>> grid(n,vector<int>(n)); 
        set<pair<int,int>> epixel;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            string t;
            cin>>t;
            for(int j=0;j<n;j++){
                grid[i][j]=t[j]-'0';
                if(grid[i][j])
                    epixel.insert(make_pair(i,j));
            }
        }
        int numEagle=0;
        while(!q.empty()||!epixel.empty()){
            if(!q.empty()){
                pair<int,int> node=q.front();
                q.pop();
                for(int i=0;i<8;i++){
                    int newX=node.first+dir[i][0];
                    int newY=node.second+dir[i][1];
                    if(epixel.find(make_pair(newX,newY))!=epixel.end()){
                        epixel.erase(make_pair(newX,newY));
                        q.push(make_pair(newX,newY));
                    }
                }
            }
            else{
                numEagle++;
                q.push(*epixel.begin());
                epixel.erase(*epixel.begin());
            }
        }
        printf("Image number %d contains %d war eagles.\n",count,numEagle);
        count++;
     }
    return 0;
}
