#include <iostream>
#include <string>
using namespace std;
class node{
    public:
    
    string s;
    node* next;
    node(string s){
        this->s=s;
        this->next=NULL;
    }
};
class Linkedlist {
    public:
    
    node* head;
    node* tail;
    Linkedlist(){
        head=NULL;
        tail=NULL;
    }
    void appendbegin(string s){
        node* newnode =new node(s);
        if(head==NULL){
            head=tail=newnode;
        }else{
           //node *temp=new node(s);
        newnode->next=head;
        head=newnode;
        }
        
    }
    
    void insertatend(string s){
        
        node *temp=new node(s);
        if(head==NULL){
            head=tail=temp;
        } else{
       tail->next=temp;
        tail=temp;
        }
         //append(s);
    }
    void display(){
        
        node* temp=head;
        if(temp==NULL){
            cout<<"empty"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->s<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    int n;
    cin>>n;
    string s;
    cout<<"Document: ";
    for(int i=0;i<n;i++){
        cin>>s;
        ll.appendbegin(s);
    }
    ll.display();
    
    cin>>s;
    ll.insertatend(s);
    
    //ll.append(s);
    cout<<"Updated Document: ";
    ll.display();
}