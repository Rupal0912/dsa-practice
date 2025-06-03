//if array is sorted or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
 for(int i=0;i<n-1;i++){//n-1
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag =false;
        }
    }
    if(flag==true){ //swap didnt happen
        break;
    }
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}