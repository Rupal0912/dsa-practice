#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows:";
    cin>>n;
   
    for(int i=1;i<=n;i++){
       for(int j=0;j<n;j++){
        cout<<(char)(j+'A')<<" ";
       }
       cout<<endl;
       
    }
    }