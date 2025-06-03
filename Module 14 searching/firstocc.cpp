#include<iostream>
using namespace std;
int main(){
    
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5,9};
   int n=13;
   int x=3;

   

    int lo=0;
    int hi=n-1;
    bool flag=false;
    //int result= -1;
    int count=0;
    while(lo<=hi){
        int mid=(lo+hi)/2;
    if(arr[mid]==x) {
        if (arr[mid-1]!=x){
        flag=true;
        count++;
        //cout<<arr[mid];
    break;
    }
    else{//arr[mid-1]=
        hi=mid-1;
        count++;
    }
    }
    if(arr[mid]<x) {
        lo=mid+1;
        count++;
    }
    if(arr[mid]>x) {
        hi=mid-1;
        count++;
   
    }
    }
    if(flag==false) cout<<-1;
    cout<<count;
   
}