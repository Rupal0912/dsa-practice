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
void pushatidx(stack<int>& st,int idx,int val){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        // cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
     st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    pushatidx(st,2,80);
    print(st);

}