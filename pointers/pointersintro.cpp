#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *ptr=&x;
    
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<endl;
    float x1=4;
    float *ptr1=&x1;
    cout<<&x1<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr<<endl;

}