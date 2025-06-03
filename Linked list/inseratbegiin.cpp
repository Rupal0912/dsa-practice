#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    node* head;
    node* tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertatbegin(int val){
        node *temp=new node(val);
        if(size==0){
           head=tail=temp;

        }
        else{
        temp->next=head;
        head=temp;
        }
       size++; 
    }
    void display(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
};
int main(){
    Linkedlist ll;
    ll.insertatbegin(10);
    ll.display();
     ll.insertatbegin(5);
    ll.display();
    ll.insertatbegin(50);
    ll.display();
    ll.insertatbegin(55);
    ll.display();
}