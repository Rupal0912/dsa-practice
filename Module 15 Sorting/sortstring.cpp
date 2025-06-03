#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  string s="AZYXHIYSWK";
  string str;
  for(int i=0;i<s.length();i++){
    if(s[i]>='S'){
        str.push_back(s[i]);
    }
  }
  
  cout<<str;
  for(int i=0;i<str.length()-1;i++){
    bool flag=true;
    for(int j=0;j<str.length()-1-i;j++){
        if(str[j]>str[j+1]){
            char temp=str[j];
            str[j]=str[j+1];
            str[j+1]=temp;
            flag=false;
        }
    }
    if(flag==true){
        break;
    }
  }
  cout<<endl;
  cout<<str;
 
}