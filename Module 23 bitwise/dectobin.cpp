#include<iostream>
using namespace std;
string dectobin(int n){
    string result="";
    while(n>0){
        if(n%2==0){
            result="0" + result;
        }
        else{
            result="1" + result;
        }
        n=n/2;
    }
    return result;
}
int main(){
    int n;
    cout<<"enter the desired number: ";
    cin>>n;
    cout<<dectobin(n)<<endl;
}