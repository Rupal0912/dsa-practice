#include<iostream>
#include<vector>
#include<queue>

#include<algorithm>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
// Function to display the tree in level-order traversal
void levelorderqueue(Node*root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp= q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    Node* a= new Node(7);
    Node* b= new Node(2);
    Node* c= new Node(3);
    Node* d= new Node(4);
    Node* e= new Node(1);
    Node* f= new Node(6);
    Node* g= new Node(9);
    
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    cout << "Level-order traversal using queue: ";
    levelorderqueue(a);

    
    
    
    return 0;
}