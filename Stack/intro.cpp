#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    //cout<<st.top()<<endl;
    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // } 
    // we will use extra stack
    //reverse order h ye
    // stack<int> temp;
    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     int x=st.top();
    //     st.pop();
    //     temp.push(x);
    // } 

    //  while(temp.size()>0){
    //     st.push(temp.top());
    //     temp.pop();
    //     //temp.push(x);
    // } 
    //normal order me print 
      stack<int> temp;
    while(st.size()>0){
        //cout<<st.top()<<endl;
        int x=st.top();
        st.pop();
        temp.push(x);
    } 

     while(temp.size()>0){
        cout<<temp.top()<<endl;
        st.push(temp.top());
        temp.pop();
        //temp.push(x);
    }


}