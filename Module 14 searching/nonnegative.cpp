#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,4,5,6,7,8,9};
    int n=8;
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
            cout<<i;
            break;
        }
    }
}