#include<iostream>
using namespace std;    
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=nullptr;

    }
};
int main(){
    node* head;
    head=NULL;
    int arr[] ={2,4,6,8,10};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head= new node(arr[i]);
        }
        else{
            node* temp;
            temp = new node(arr[i]);
            temp->next = head;
            head=temp;
        }
    }

    //printing the linked list
    node * temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp= temp->next;
    };
}