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
  int l=s.length();
    
   for(int  i=0;i<l/2;i++){
    if(s[i]==s[l-i-1] ){
      cout<<"yes";
      break;
    } 
    else{
      cout<<"no";
      break;
    }
   }
 


}