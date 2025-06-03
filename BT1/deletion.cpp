//CODE WHEN NODE HAS 0 CHILD
// node* deletenode(node= root,int key){
//     if(root->val==key) return NULL;
//     else if(root->val > val){
//         root->left= deletenode(root->left,key);
//     }
//     else{
//         root->right=deletenode(root->right,key);
//     }
//     return root;
// }


//HAS 1 CHILD
//if(root->val==key) {
    //case1: 0 child 
    //if(root->left==NULL && root->right==NULL) return NULL;
//
// if(root->left==NULL || root->right==NULL){
//     if(root->left!=NULL) return root->left;
//     else return root->right;
// }
//}