#include<iostream>
using namespace std;
class stack{
    public:
    int arr[5];
    int idx;
    stack(){
        idx=-1;
}
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack emplty"<<endl;
            return ;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"stack empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(200);
    st.push(2);
    st.push(230);
    st.push(210);
    st.push(290);
    cout<<st.size()<<endl;
}