#include<iostream>
using namespace std;
int odd(int n,int m){
     for(int i=n;i<=m;i+=2){
        cout<<i<<endl;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    // for(int i=a;i<=b;i+=2){
    //     cout<<i<<endl;
    // }
    odd(a,b);
}