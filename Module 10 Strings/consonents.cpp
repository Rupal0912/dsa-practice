#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //user input...
   string s;
   cout<<"enter: ";
   getline(cin,s);
    //user input tha ye

    int count=0;
   for(int  i=0;i<s.length();i++){
    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' ){
        count++;
    }
   }
   cout<<count;


}