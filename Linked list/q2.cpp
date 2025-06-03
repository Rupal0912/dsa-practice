// You are using GCC
#include<iostream>
using namespace std;
// You are using GCC

class node{
    public:
    
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist {
    public:
    
    node* head;
    
    Linkedlist(){
        head=NULL;
        
    }
    void appendbegin(int val){
        node* newnode =new node(val);
        if(head==NULL){
            head=newnode;
        }else{
           //node *temp=new node(s);
        newnode->next=head;
        head=newnode;
        }
        cout<<"Node inserted "<<endl;
        
    }
    
 
         //append(s);
    
    void display(){
        
        node* temp=head;
        cout<<"Linked List: ";
       
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
        cout<<"Node ended"<<endl;
    }
};
int main(){
    Linkedlist ll;
    
    int val,choice=0;
  
  while(choice ==0){
      cin>>val;
      ll.appendbegin(val);
      cin>>choice;
  }
  ll.display();
 
   
       
    

}