#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //string s="abcdefgh";
    string s;
    getline(cin,s);
    int n=s.length();
    
    reverse(s.begin()+n/2,s.begin()+n);
    cout<<s;
}