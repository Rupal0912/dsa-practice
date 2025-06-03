#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack <int> gt;
    while(st.size()>0){
        cout<<st.top()<<" ";
        gt.push(st.top());
        st.pop();

    }
    while(gt.size()>0){
        st.push(gt.top());
        gt.pop();
    }
}