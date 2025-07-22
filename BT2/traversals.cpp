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
// Function to display the tree in pre-order traversal
void display(node* root){
    if(root==NULL)
        return;
    
    cout<<root->val<<" ";
    
    display(root->left);
    display(root->right);
}
// Function to display the tree in in-order traversal
// void display(node* root){
//     if(root==NULL)
//         return;
    
    
    
//     display(root->left);
//     cout<<root->val<<" ";
//     display(root->right);
// }
// Function to display the tree in post-order traversal
// void display(node* root){
//     if(root==NULL)
//         return;
    
    
    
//     display(root->left);
    
//     display(root->right);
//     cout<<root->val<<" ";
// }

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

    display(a); // Output: 7 2 4 1 3 6 9
    
    return 0;
}