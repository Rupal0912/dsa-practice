#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void displayrev(stack<int>& st){
    stack<int> temp;
    if(st.size()==0){
        return;
    }
    cout<<st.top()<<" ";
    st.pop();
    displayrev(st);
    st.push(st.top());
}
int main(){
    stack<int> st;
     st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
  displayrev(st);
    print(st);

}