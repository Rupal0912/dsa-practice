#include<iostream>
using namespace  std;
int a=9;  //global variable
void fun(int x,int y){
    cout<<"x"<<endl;
    cout<<"y"<<endl;
}
void f(){
    cout<<a;
}
int main(){
    f();
    cout<<a+7<<endl;
    f();
}