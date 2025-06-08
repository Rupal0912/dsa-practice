#include<iostream>
using namespace std;
int main(){
    int l,m,n;
    cout<<"enter 1st number:";
    cin>>l;
    cout<<"enter 2nd number:";
    cin>>m;
    cout<<"enter 3rd number:";
    cin>>n;
    if(l>m && l>n){
        cout<<"the largest number = "<<l;
    }
    if(m>l && m>n){
        cout<<m<<" is the largest number";
    }
    if(n>m && n>l){
        cout<<"the largest number = "<<n;
    }
    
}