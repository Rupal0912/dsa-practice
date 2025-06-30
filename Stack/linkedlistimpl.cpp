#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};
class stack{
    node* top;
    int size=0;

    // class stack(node* top){
    //     top = nullptr;
    // }
    public:
    stack() : top(nullptr), size(0) {}
    void push(int val){
        node* temp= new node(val);
        temp->next = top;
        top= temp;
        size++;

    }
    void pop(){
        if(top == nullptr){
            cout << "Stack is empty" << endl;
            return;
        }
        node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int topValue(){
        if(top == nullptr){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }
    int getSize(){
        return size;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top value: " << st.topValue() << endl;
    cout << "Stack size: " << st.getSize() << endl;
    st.pop();
    cout << "Top value after pop: " << st.topValue() << endl;
    cout << "Stack size after pop: " << st.getSize() << endl;
}