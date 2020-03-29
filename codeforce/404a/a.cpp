#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> grid(n,"");
    for(int i=0;i<n;i++)
        cin>>grid[i];
    
    char cross=0;
    char other=0;
    bool cOK=true;
    bool oOK=true;
    for(int i=0;i<n&&cOK&&oOK;i++){
        for(int j=0;j<n&&cOK&&oOK;j++){
            if(j==i||n-j-1==i){
                if(!cross)
                    cross=grid[i][j];
                else
                    cOK=cross==grid[i][j];
            }
            else{
                if(!other)
                    other=grid[i][j];
                else
                    oOK=other==grid[i][j];
                
            }
                
            
            
        }
            
        
        
    }
    if(cOK&&oOK&&cross!=other)
        cout<<"YES";
    else
        cout<<"NO";
    
    
    return 0;
}