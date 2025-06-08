#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string s1="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='a') s1 += s[i];
    }
    cout<<s1;
}