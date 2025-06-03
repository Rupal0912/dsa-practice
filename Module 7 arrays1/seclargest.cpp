#include<iostream>
//#include<limits>
using namespace std;
int find(int arr[],int n){
 int max= arr[0];
    for(int i=1;i<=n-1;i++){
        if(max<arr[i])  max=arr[i];
    }
    
    int smax= arr[0];
    for(int i=1;i<=n-1;i++){
        if( arr[i]!=max && smax<arr[i])  smax=arr[i];
    }
    return max;
    }
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];

    }

    // int max = arr[0];
    int r=find(arr,n);
    if(r==-1){
        cout<<"nothing";
    }
    else{
        cout<<r; 
    }
    // int max= INT8_MIN;
    // for(int i=1;i<=n-1;i++){
    //     if(max<arr[i])  max=arr[i];
    // }
    // int smax= INT8_MIN;
    // for(int i=1;i<=n-1;i++){
    //     if( arr[i]!=max && smax<arr[i])  smax=arr[i];
    // }
    // cout<<max<<endl;
    // cout<<smax<<endl;
}