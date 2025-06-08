#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
     string str;
   cout<<"enter: ";
   getline(cin,str);
   int count=0,l=0;
 
   for(int  i=0;i<(int)str.length();i++){
   
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){

        l++;
       
    }
   else{
    count=l*(l+1)/2;
    l=0;
   }
   
 
   }
   count+=l+(l+1)/2;
   cout<<count;
}