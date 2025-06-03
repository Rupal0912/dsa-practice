#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node *next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node *head){
    //base case
    if(head==NULL){
        return;
    }
    cout<<head->val<<" ";
    display(head->next);
}
int main(){
     node* a= new node(10);
    node *b=new node(20);
    node* c=new node(30);
    node *d=new node(40);
    //FORMING LL
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
}