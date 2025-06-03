#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
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
    void append(int val){
        node* newnode= new node(val);
        if(head==NULL){
            head=newnode;
        } else{
            node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
   
    void display(){
        node* temp=head;
        if(temp==NULL){
            cout<<"empty h";
            return;
        }
        while(temp!=NULL){
            cout<<temp->val<<"-->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void deletenode(int targetv){
        node*temp=head;
        //  node* temp = target->next;
        // target->val = temp->val;
        // target->next = temp->next;
        
        while(temp->next->val!=targetv){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
};

int main(){
    Linkedlist ll;
    int n,val;
    cout<<"How many elements do u want?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"value for node "<<i+1<<":";
        cin>>val;
        ll.append(val);
    }
    cout<<"Linkedlist: ";
    ll.display();
    int target;
    cout<<"enter target";
    cin>>target;
    //node* targetnode;
    ll.deletenode(target);
    ll.display();

}