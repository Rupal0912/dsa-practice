#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //string s="abcdefgh";
    string s;
    getline(cin,s);
    int n=s.length();
    cout<<s<<endl;
    string r=s;
    reverse(r.begin(),r.end());
    s = s + r ;
     
    cout<<s;
}