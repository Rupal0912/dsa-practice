#include<iostream>
using namespace std;
void fun(int n){
    if(n<=0){
        return; 
    }
    cout<<"good morning"<<endl;
    fun(n-1);
    
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    fun(n);
}