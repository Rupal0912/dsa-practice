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
int maxdia=0;
int levels(node* root){
    if(root==NULL) return 0;
    return 1+ max(levels(root->left),levels(root->right));

}
int diameterofbinarytree(node* root){
    if(root==NULL) return 0;
    int dia= levels(root->left)+ levels(root->right);
    maxdia=max(maxdia,dia);
    diameterofbinarytree(root->left);
    diameterofbinarytree(root->right);
    return maxdia;
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
          c->left=f;
          c->right=g;
          cout<<diameterofbinarytree(a)<<endl; // Output: 5
}
