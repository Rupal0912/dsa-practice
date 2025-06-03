// You are using GCC
#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    Node* head;
    Node* tail;
    Linkedlist(){
        head=tail=NULL;
    }
    


void appendLeft( int val) {
    //Type your code here
    
    Node* newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    } else{
    newnode->next=head;
    head=newnode;
    }
}

void appendRight( int val) {
    //Type your code here
    Node* newnode=new Node(val);
    if(tail==NULL){
        head=tail=newnode;
    }else{
        
    
    tail->next=newnode;
    tail=newnode;
}
}

void print() {
    //Type your code here
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};

int main() {
    // Node* myList = nullptr;
    Linkedlist ll;
    int choice;
    int val;

    do {
    cin >> choice;


    switch (choice) {
        case 1:
            cin >> val;
            ll.appendLeft( val);
            break;
        case 2:
            cin >> val;
            ll.appendRight(val);
            break;
        case 3:
            cout << "Linked List: ";
            ll.print();
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice" ;
    }

} while (choice != 4);


    return 0;
}