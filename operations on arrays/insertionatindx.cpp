#include<iostream>
using namespace std; 
int main(){
    int arr[10]={1,2,3,4,5};
    int newel=9;
    int index=2;
    int size=5;
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=newel;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}