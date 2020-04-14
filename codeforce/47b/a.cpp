#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main (){
    vector<vector<int>> list=(3,{1,2,3}};
    int n=3;
    while(n){
        string input;
        cin>>input;
        if(input[1]=='>'){
            list[input[2]-'A'].erase(list[input[2]-'A'].end()-1);
            list[input[0]-'A'].erase(list[input[0]-'A'].begin());
        }
        else{
            list[input[0]-'A'].erase(list[input[0]-'A'].end()-1);
            list[input[2]-'A'].erase(list[input[2]-'A'].begin());
        }
            
        n--;
    }
    if(input
    
    return 0;
}
