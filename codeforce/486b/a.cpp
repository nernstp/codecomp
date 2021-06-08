#include <iostream> 
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>m>>n;
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    bool r,c,correct;
    r=c=correct=true;
    int nr,nc;
    nr=nc=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
        }    
    } 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;    
    }
    return 0;
}