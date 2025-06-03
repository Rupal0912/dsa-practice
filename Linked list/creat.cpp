#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //FORMING LL
    a.next=&b;
    b.next=&c;
    c.next=&d;
    Node *ptr=&b;
    // (*ptr).val=60;
    ptr->val=60;
    //cout<<(*ptr).val;
    //*(*(*(a.next).next).next).val;
    cout<<(((a.next)->next)->next)->val;
    
}