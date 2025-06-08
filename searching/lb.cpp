#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter target element: ";
    cin>>target;

    int lo=0;
    int hi=n-1;
    bool flag=false;
    //int result= -1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
    if(arr[mid]==target) {
        flag=true;
        cout<<arr[mid-1];
    break;
    }
    if(arr[mid]<target) {
        lo=mid+1;
    }
    if(arr[mid]>target) {
        hi=mid-1;
   
    }
    }
    if(flag==false) cout<<arr[hi];
    // if(result != -1){
    //     cout<<"element found: "<<result<<endl;
    // }
    // else{
    //     cout<<"element not found"<<endl;
    // }
}