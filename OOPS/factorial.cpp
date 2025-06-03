#include<iostream>
#include<string>
using namespace std;
int main(){
    int *p=new int;
    int *fact=new int;
    if(p==NULL || fact=NULL){
        cout<<"memory allocation failed"<<endl;
        exit(1);
    }
    cout<<"enter the number: ";
    cin>>*p;
    *fact=1;
    for(int i=1;i<=*p;i++){
        *fact=*fact*i;
    }
    cout<<"factorial is"<<*fact;
}