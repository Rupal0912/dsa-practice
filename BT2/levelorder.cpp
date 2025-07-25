#include<iostream>
#include<vector>
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
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));

}
void nthlevel(Node* root, int curr, int level, vector<int> &v){
    if(root==NULL) return;
    if(curr==level){
        v.push_back(root->val);
        return;
    }
    nthlevel(root->left, curr+1, level, v);
    nthlevel(root->right, curr+1, level, v);
}
void lorder(Node* root, vector<vector<int>>& ans){
    int n= levels(root);
    for(int i=0;i<n;i++){
        vector<int> v;
        nthlevel(root, 0, i, v);
        ans.push_back(v);
        cout<<endl;
    }
}
vector<vector<int>> levelorder(Node* root) {
    vector<vector<int>> ans;
    lorder(root, ans);
    return ans;
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

    vector<vector<int>> ans = levelorder(a);
    
    for(auto level : ans) {
        for(int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}