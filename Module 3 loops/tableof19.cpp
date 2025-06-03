#include<iostream>
using namespace std;
int main(){
    // for(int i=19;i<=190;i=i+19){
    //     //if(i%19==0)
    //     cout<<i<<endl;
    // }
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=n;i<=n*10;i+=n){
        cout<<i<<endl;
    }
}