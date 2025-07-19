#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int prefix[n];
    int suffix[n];
    int ans[n];
    int p= arr[0];
    prefix[0]=1;
    for(int i=1;i<n;i++){
        prefix[i]=p;
        p*=arr[i];
    }
    p=arr[n-1];
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suffix[i]=p;
        p*=arr[i];
    }
    for(int i=0;i<n;i++){
        ans[i]= prefix[i]* suffix[i];
    }
  
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}