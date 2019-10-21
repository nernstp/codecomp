#include <iostream>
#include <string>
#define RGB "RGB"
using namespace std;

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int result=INT_MAX;
        int** arr;
        arr=(int**)malloc(sizeof(int*)*3);
        for(int j=0;j<3;j++)
            arr[j]=(int*)malloc(sizeof(int)*s.length());

        
        for(int j=0;j<s.length();j++){
             if(!j){
                 for(int k=0;k<3;k++){
                    if(s[j]==RGB[(j+k)%3])
                        arr[k][j]=0;
                    else
                        arr[k][j]=1;
                    }
                 
             }
             else{
                 for(int k=0;k<3;k++){

                 
                    if(s[j]==RGB[(j+k)%3])
                        arr[k][j]=arr[k][j-1];
                    else
                        arr[k][j]=arr[k][j-1]+1;
                 }
                     
                 
             }
             
             for(int k=0;k<3;k++)
                cout<<arr[k][j]<<" ";    
                 
             cout<<endl;
            
            
        }
       
        
        cout<<endl;
    }
    
    
    
    return 0;
}