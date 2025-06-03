#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   string str="this is something";
   // cout<<str.length();
   cout<<str<<endl;
   string str1="abcd";
   str=str+str1;
   cout<<str<<endl;
   string str2="abcde"; //0 1 2 3 4
   reverse(str2.begin()+2,str2.end()-1);
   cout<<str2<<endl;

}