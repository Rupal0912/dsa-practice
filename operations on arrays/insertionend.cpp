#include<iostream>
using namespace std; 
int main(){
    int arr[10]={1,2,3,4,5};
    int newel=9;
    int size=0;
    while(size<10 && arr[size]!=0){
        size++;
    }
    arr[size]=newel;
    for(int i=0;i<size+1;i++){
        cout<<arr[i]<<" ";
    }

}