#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //string s="abcdefgh";
    string s;
    getline(cin,s);
    int n=s.length();
    
    reverse(s.begin()+1,s.begin()+5);
    cout<<s<<endl;
    cout<<s.substr(2,2);
}