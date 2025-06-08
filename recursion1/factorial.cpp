#include<iostream>
using namespace std;
void fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fact(n);
}