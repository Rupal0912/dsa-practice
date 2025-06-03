#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"AP IS:";
    // for(int i=1;i<=2*n-1;i=i+2){
    //     cout<<i<<" ";
    // }
    //different method jo ki h seperate variable wala
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+2;
    }
}