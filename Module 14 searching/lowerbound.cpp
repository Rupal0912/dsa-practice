#include<iostream>
using namespace std;
int main(){
    
    int arr[9]={1,2,4,5,9,15,18,33,45};
    int t=6;
    int n=9;
    for(int i=0;i<n;i++){
        if(arr[i]>t){
            cout<<arr[i-1];
            break;
        }
    }
}