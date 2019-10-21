#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct TreeNode{
    long long val;
    TreeNode** left=NULL;
    TreeNode** right=NULL;
    
    TreeNode(long long x):val(x),left(NULL),right(NULL) {};
    
};

void CompL(set<TreeNode*>* s, TreeNode* root, long long val){
    
    if(root){
        
        if(root->val>val)
            s->insert(root);
        if(root->left)
            CompL(s,*(root->left),val);
        if(root->right)
            CompL(s,*(root->right),val);
    }
    
    return;
    
}

void CompR(set<TreeNode*>* s, TreeNode* root, long long val){
    
    if(root){
        
        if(root->val<val)
            s->insert(root);
        if(root->left)
            CompR(s,*(root->left),val);
        if(root->right)
            CompR(s,*(root->right),val);
    }
    
    return;
    
}

void TT(set<TreeNode*>* s, TreeNode* root, long long val){
    if(root){
        if(root->left){
            if((*(root->left))->val>val)
                s->insert(*(root->left));
            TT(s,(*(root->left)),(*(root->left))->val);
            CompL(s,*(root->left),root->val);
        }
        
        if(root->right){
            if((*(root->right))->val<val)
                s->insert(*(root->right));
            TT(s,(*(root->right)),(*(root->right))->val);
            CompR(s,*(root->right),root->val);
        }
            
    }
    
    return;
}

int main(){
    int n;
    cin>>n;
    vector<TreeNode*> list(n,NULL);
    vector<bool> ri(n,false);
    
    for(int i=0;i<n;++i){
        long long val,l,r;
        cin>>val>>l>>r;
        TreeNode* t=new TreeNode(val);
        if(l>0){
            t->left=&list[l-1];
            ri[l-1]=true;
        }
        if(r>0){
            t->right=&list[r-1];
            ri[r-1]=true;
        }
        list[i]=t;
    }
    
    TreeNode* root=NULL;
    for(int i=0;i<n;++i){   
        if(!ri[i]){
            root=list[i];
        
        }
    }
    vector<long long> flatten;
    vector<bool> fail(n,false);
    
    set<TreeNode*> s;
    TT(&s, root, root->val);
    //for(set<TreeNode*>::iterator i=s.begin();i!=s.end();++i)
        //cout<<((*i)->val)<<endl;
    
    cout<<s.size();
    /*if(root){
        cout<<(*(root->left))->val;
        cout<<(*(root->right))->val;
        cout<<root->val;
    }
    */
    return 0;
}