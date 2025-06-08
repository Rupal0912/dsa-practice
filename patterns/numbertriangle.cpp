#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows:";
    cin>>n;
    // no of stars=n+1-i
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}