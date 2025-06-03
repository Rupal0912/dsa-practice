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
    void insertatend(int val){
        node* temp=new node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
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
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    void deleteathead(){
        if(size==0){
            cout<<"list empty h";
            return;
        }
        head=head->next;
        size--;

    }
    void deleteattail(){
        if(size==0){
            cout<<"empty";
            return;
        }
    node* temp =head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;

    }
      void deleteatidx(int idx){
        if(size==0){
            cout<<"empty";
            return;
        }
        else  if(idx<0 || idx>=size){
            cout<<"invalid index";
            return;
        }
        else if(idx==0) return deleteathead();
        else if(idx==size) return deleteattail();
    node* temp =head;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    }
    temp->next =temp->next->next;
    size--;

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
    Linkedlist ll;
      ll.insertatbegin(50);
    ll.display();
    ll.insertatbegin(55);
    ll.display();
    ll.insertatend(10);
    //ll.display();
    ll.insertatend(20);
    ll.display();
    ll.insertatend(100);
    ll.display();
    ll.insertatend(99);
    ll.display();
    ll.insertatidx(3,89);
    ll.display();
    ll.deleteathead();
    ll.display();
    ll.deleteattail();
    ll.display();
    ll.deleteatidx(3);
    ll.display();
}