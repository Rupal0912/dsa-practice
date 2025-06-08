#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];

    }

    // int max = arr[0];
    int min= arr[0];
    for(int i=0;i<=n-1;i++){
        if(min>arr[i])  min=arr[i];
    }
    cout<<min;
}