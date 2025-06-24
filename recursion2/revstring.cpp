#include<iostream>
using namespace std;    
void revstr(string &str, int i, int j){
    if(i>=j){
        cout<<str<<endl;
        return;
    }
    swap(str[i],str[j]);
    revstr(str, i+1, j-1);
    
}
int main(){
    string str="Hello";
    int n= str.length();
    revstr(str, 0, n-1);
}