#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //string s="abcdefgh";
    string s;
    getline(cin,s);
    int val=0,p=1;
    while(s.size()){
        val+=p*(s.back()-'0');
        s.pop_back();
        p*=10;
    }
    cout<<val;
    
   
}