#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <set>
using namespace std;

int dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}};

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<string> grid(n);
        for(int j=0;j<n;j++)
            cin>>grid[j];
        
        set<pair<int,int>> ship;
        queue<pair<int,int>> q;
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                if(grid[j][k]=='x'||grid[j][k]=='@')
                    ship.insert(make_pair(j,k));

        int total=0;
        int length=0;
        int broken=0;
        while(!ship.empty()||!q.empty()){
            if(q.empty()){
                length=0;
                broken=0;
                q.push(*ship.begin());
                ship.erase(*ship.begin());
            }
            else{
                pair<int,int> node=q.front();
                q.pop();
                length++;
                if(grid[node.first][node.second]=='@')
                    broken++;
                for(int j=0;j<4;j++){
                        int newX=node.first+dir[j][0];
                        int newY=node.second+dir[j][1];
                        if(ship.find(make_pair(newX,newY))!=ship.end()){
                            ship.erase(make_pair(newX,newY));
                            q.push(make_pair(newX,newY));
                        }
                }
                if(q.empty())
                    if(length>broken)
                        total++;
            }
        }
        printf("Case %d: %d\n",i+1,total);
    }
    return 0;
}