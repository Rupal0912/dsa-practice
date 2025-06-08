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
    int max= INT8_MIN;
    for(int i=1;i<=n-1;i++){
        if(max<arr[i])  max=arr[i];
    }
    cout<<max;
}