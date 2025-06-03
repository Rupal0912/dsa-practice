#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(node* root){
    if(root==NULL)
        return;
    
        cout<<root->val<<" ";
    
    
        display(root->left);
        display(root->right);
    
}
int sum(node* root){
    if(root==NULL) return 0;
    int ans=root->val+ sum(root->left) +sum(root->right);
    return ans;
}
int product(node* root){
    if(root==NULL) return 1;
    int ans= root->val * product(root->left) * product(root->right);
    return ans;
}
int size(node* root){
      if(root==NULL) return 0;
     int sizee  = 1 + size(root->left) + size(root->right);
    return sizee;
}
int levels(node* root){
      if(root==NULL) return 0;
     int levelss  = 1 + max(levels(root->left) , levels(root->right));
    return levelss;
}
int maxintree(node* root){
    if(root==NULL) return 0;
    int lmax=maxintree(root->left);
    int rmax=maxintree(root->right);
    return max(root->val,max(lmax,rmax));
    }
    int main(){
    node* a= new node(7);
     node* b= new node(2);
      node* c= new node(3);
       node* d= new node(4);
        node* e= new node(1);
         node* f= new node(6);
          node* g= new node(9);
          a->left=b;
          a->right=c;
          b->left=d;
          b->right=e;
          //c->left=f;
          c->right=g;
          display(a);
          cout<<endl;
         cout<< sum(a);
          //display(a);
          cout<<endl;
        //   cout<<size(a)<<endl;
        //   cout<<maxintree(a);
           cout<<product(a)<<endl;
           cout<<levels(a);
}