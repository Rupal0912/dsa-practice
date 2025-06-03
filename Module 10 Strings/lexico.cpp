#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"str: ";
    getline(cin,s);
    
    stringstream ss(s);
    string word;
    string maxword;
    while(ss>>word){
       if(word>maxword){
        maxword=word;
       }
    }
  
    cout<<maxword;
}