#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int product=1;
    cout<<"the product is: ";
    for(int i=0;i<=n-1;i++){
        product=product*arr[i];
    }
    cout<<product;
}