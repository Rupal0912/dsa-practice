#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node *next;
    node* prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
        head->prev = temp; // Set the previous pointer of the old head
        head=temp;
        }
       size++; 
    }
    void insertatend(int val){
        node* temp=new node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail; // Set the previous pointer of the new tail
            tail=temp;
        }
        size++;
    }
     void insertatidx(int idx,int val){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx==0) insertatbegin(val);
        else if(idx==size) insertatend(val);
        else{
            node * t=new node(val);
            node*temp=head;
            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;//connection todo
            temp->next=t;//jodo
            t->prev=temp; // Set the previous pointer of the new node
            t->next->prev = t; // Set the previous pointer of the next node
            size++;
        }
    }

    void display(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist list;
    list.insertatbegin(10);
    list.display(); // Display the list after inserting at the beginning
    list.insertatend(20);
    list.insertatend(30);
    list.display(); // Display the list after inserting at the end
    list.insertatbegin(5);
    list.display(); // Display the list after inserting another value at the beginning
    list.insertatidx(2, 15); // Insert 15 at index 2
    list.display(); // Display the list to see the result
  
}
