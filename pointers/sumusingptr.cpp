#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int*ptr1=&x;
    int *ptr2=&y;
    cout<<"enter first number:";
    cin>>*ptr1;
    cout<<"enter seccond number:";
    cin>>*ptr2;

    cout<<*ptr1+*ptr2<<endl;
}
