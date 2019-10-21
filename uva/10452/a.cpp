#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <queue>
using namespace std;

string words="IEHOVA#";
int dir[3][2]={{0,-1},{-1,0},{0,1}};

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            int m,n;
            cin>>m>>n;
            vector<string> grid(m);
            pair<int,int> curr;
            for(int j=0;j<m;j++)
                cin>>grid[j];
            for(int j=0;j<m;j++)
                for(int k=0;k<n;k++)
                    if(grid[j][k]=='@')
                        curr=make_pair(j,k);
            
            for(int idx=0;idx<words.length();idx++){
                int result;
                for(int j=0;j<3;j++){
                    int newX=curr.first+dir[j][0];
                    int newY=curr.second+dir[j][1];
                    if(newX>=0&&newX<m&&newY>=0&&newY<n){
                        if(grid[newX][newY]==words[idx]){
                            result=j;
                            curr=make_pair(newX,newY);
                            break;
                        }
                    }
                }
                if(result==0)
                    cout<<"left";
                else if(result==1)
                    cout<<"forth";
                else
                    cout<<"right";
                if(idx<words.length()-1)
                    cout<<" ";
            }
            cout<<endl;
    }
    return 0;
}