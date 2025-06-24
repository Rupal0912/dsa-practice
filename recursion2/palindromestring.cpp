#include<iostream>
using namespace std;
bool ispalindrome(string str, int i, int j){
    if(i>=j){
        return true;
    }
    if(str[i]!=str[j]){
        cout<<"not a palindrome"<<endl;
        return false;
    }
    return ispalindrome(str, i+1, j-1);
  
}
int main(){
    string str= "madam";
    int n= str.length();
    bool result = ispalindrome(str, 0, n-1);
    if(result) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }
   
}