#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rowws:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        //int a=1;
        for(int k=1;k<=n;k++){
            cout<<"*"<<" ";
            // a++;
        }
        // for(int m=1;m<=;m++){
        //     cout<<" "<<" ";
        // }
        cout<<endl;
    }
}