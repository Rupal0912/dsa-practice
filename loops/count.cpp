#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter n:";
    cin>>n;
    int count=0;
    int a=n; //store krado dusre me bhi

    while(n>0){
    n/=10;
    count++;
    
    }
    if(a==0) cout<<1;
    else cout<<count;


}