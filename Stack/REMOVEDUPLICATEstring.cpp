#include<iostream>
#include<stack>
using namespace std;
string removedup(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s="";
    while(st.size()>0){
         //st.pop();
        s+=st.top();
         st.pop();
    }
    return s;
}
int main(){
    string s="aaabbcddaabffg";
    cout<<s<<endl;
    s = removedup(s);
    cout<<s<<endl;
}