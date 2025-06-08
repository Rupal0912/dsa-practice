#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    
    string t;
    getline(cin,t);
    sort(t.begin(),t.end());

   if(s==t){
    cout<<"True";
   }
   else{
    cout<<"False";
   }
}