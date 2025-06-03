#include<iostream>
using namespace std; 
int main(){
    int arr[10]={1,2,3,4,5};
    int newel=9;
    int size=5;
    for(int i=size+1;i>0;i--){
        arr[i-1]=arr[i-2];
    }
    arr[0]=newel;
    for(int i=0;i<size+1;i++){
        cout<<arr[i]<<" ";
    }

}