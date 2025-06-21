#include<iostream>
using namespace std;
bool isSorted(int arr[], int n, int idx){
    if(idx==n-1) return true;
    if(arr[idx]>arr[idx+1]) return false;
    return isSorted(arr, n, idx + 1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,n,0)){
        cout<<"Array is sorted"<<endl;
    } else {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;

}