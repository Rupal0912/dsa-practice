#include<iostream>
using namespace std;
void fun(int x,int y){
    cout<<"address of x:"<<&x<<endl;
    cout<<"address of y:"<<&y<<endl;
}
int main(){
    int x=3;
    int y=7;
    cout<<"address of main x: "<< &x<<endl;
    cout<<"adress of main y: "<< &y<<endl;
    fun(x,y);
}