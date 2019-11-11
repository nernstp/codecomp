#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    vector<pair<double,double> > rectst;
    vector<pair<double,double> > rectsd;
    
    string a;
    cin>>a;
    while(a[0]!='*'){
        stringstream ss;
        char t;
        ss<<a;
        ss>>t;
        double l,r;
        cin>>l>>r;
        rectst.push_back(make_pair(l,r));
        cin>>l>>r;
        rectsd.push_back(make_pair(l,r));
        cin>>a;
    }
    int c=1;
    double x,y;
    cin>>x>>y;
    while(x!=9999.9){
        int n=0;
        for(int i=0;i<rectst.size();i++){
            pair<double,double> t=rectst[i];
            pair<double,double> d=rectsd[i];
            
            if(x>t.first&&x<d.first&&y<t.second&&y>d.second){
                printf("Point %d is contained in figure %d\n",c,i+1);
                n++;
            }
            
               
        }
        if(!n)
            printf("Point %d is not contained in any figure\n",c);
        c++;
        cin>>x>>y;
    }
    return 0;
}