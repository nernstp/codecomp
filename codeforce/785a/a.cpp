#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        if(t=="Tetrahedron")
            total+=4;
        else if(t=="Cube")
            total+=6;
        else if(t=="Octahedron")
            total+=8;
        else if(t=="Dodecahedron")
            total+=12;
        else if(t=="Icosahedron")
            total+=20;
        
    }
    cout<<total;
    return 0;
}

