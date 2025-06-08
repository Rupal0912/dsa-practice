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

    int max = arr[0];
    //int max= INT8_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i])  max=arr[i];
    }
    int smax= arr[0];
    for(int i=0;i<=n-1;i++){
        if( arr[i]!=max && smax<arr[i])  smax=arr[i];
    }
    int tmax=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]!=smax &&  arr[i]!=max) && arr[i]>tmax)  tmax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax<<endl;
    cout<<tmax<<endl;
}