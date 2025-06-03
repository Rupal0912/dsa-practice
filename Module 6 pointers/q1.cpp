#include<iostream>
using namespace std;
int product(int *ptr1,int *ptr2){
    int c=(*ptr1)*(*ptr2);
}
int main(){
    int n,m;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter m:";
    cin>>m;
    product(&n,&m);
    cout<<product(&n,&m);
}