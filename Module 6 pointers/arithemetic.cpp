#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p=&x;
    
    cout<<*p<<endl; //5
    (*p)++;
    cout<<*p<<endl;
    cout<<p<<endl; //0x61ff08
    p=p+1;
    cout<<p<<endl;  //0x61ff0c
    cout<<*p;  //6422284

}