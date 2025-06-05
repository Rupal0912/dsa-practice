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
node* intersection(node* head1, node* head2){
   node* temp1= head1;
   node* temp2= head2;
   int len1=0;
   while(temp1!=NULL){
    len1++;
    temp1=temp1->next;
   }
   int len2=0;
   while(temp2!=NULL){
    len2++;
    temp2=temp2->next;
   }
   temp1=head1;
   temp2=head2;
   if(len1>len2){
    int diff=len1-len2;
    for(int i=1;i<=diff;i++){
        temp1=temp1->next;
    }
    while(temp1!=temp2){
        temp1= temp1->next;
        temp2= temp2->next;
    }
    return temp1;
   }
   else{
    int diff = len2-len1;
    for(int i=1;i<=diff;i++){
        temp2=temp2->next;

    }
    while(temp1!=temp2){
        temp1= temp1->next;
        temp2= temp2->next;
    }
    return temp2;
   }
}
int main(){
    node* head1= new node(1);
    head1->next= new node(2);
    head1->next->next= new node(3);
    head1->next->next->next= new node(4);
    
    node* head2= new node(5);
    head2->next= new node(6);
    head2->next->next= head1->next->next; // Intersection at node with value 3

    node* intersectionNode = intersection(head1, head2);
    if(intersectionNode != nullptr){
        cout << "Intersection at node with value: " << intersectionNode->val << endl;
    } else {
        cout << "No intersection." << endl;
    }
    
    return 0;
}