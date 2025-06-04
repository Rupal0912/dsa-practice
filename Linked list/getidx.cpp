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
    Linkedlist(){
        head=NULL;
    }
    int insertatbegin(int val){
        node* newnode =new node(val);
        if(head==NULL){
            head=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
        cout<<"Node inserted "<<val<<endl;
        return 0; // success
    }
    int insertatend(int val){
        node* newnode =new node(val);
        if(head==NULL){
            head=newnode;
        }else{
            node* temp=head;
            while(temp->next!=NULL) temp=temp->next;
            temp->next=newnode;
        }
        cout<<"Node inserted "<<val<<endl;
        return 0; // success
    }
    int insertatidx(int idx, int val){
        if(idx < 0) {
            cout<<"Invalid index"<<endl;
            return -1; // failure
        }
        if(idx == 0) {
            return insertatbegin(val);
        }
        node* newnode = new node(val);
        node* temp = head;
        for(int i=0; i<idx-1 && temp!=NULL; i++) {
            temp = temp->next;
        }
        if(temp == NULL) {
            cout<<"Index out of bounds"<<endl;
            delete newnode; // clean up
            return -1; // failure
        }
        newnode->next = temp->next;
        temp->next = newnode;
        cout<<"Node inserted "<<val<<endl;
        return 0; // success
    }
    void display(){
        node *temp=head;
        if(temp==NULL){
            cout<<"Linked List is empty"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
int main(){
    Linkedlist ll;
    int choice, val, idx;
    while(true) {
        cout<<"1. Insert at beginning\n2. Insert at end\n3. Insert at index\n4. Display\n5. Exit\n";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Enter value to insert at beginning: ";
                cin>>val;
                ll.insertatbegin(val);
                break;
            case 2:
                cout<<"Enter value to insert at end: ";
                cin>>val;
                ll.insertatend(val);
                break;
            case 3:
                cout<<"Enter index and value to insert: ";
                cin>>idx>>val;
                ll.insertatidx(idx, val);
                break;
            case 4:
                ll.display();
                break;
            case 5:
                return 0; // exit
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
}