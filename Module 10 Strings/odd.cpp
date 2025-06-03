#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
     cin>>str[i];
    }
    cout<<endl;
    cout<<"string!"<<endl;
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
       if(i%2!=0){
            cout<<"#";
        }
        else{
            cout<<str[i];
        }
}
}