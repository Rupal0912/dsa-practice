#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rowws:";
    cin>>n;
    //int m=n-1;

    //for(int c=1;c<=)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        //int a=1;
        for(int k=1;k<=2*i-1;k++){
            cout<<" "<<" ";
            //a+=2;
           

        }
        for(int l=1;l<=n-i;l++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    
    }
}