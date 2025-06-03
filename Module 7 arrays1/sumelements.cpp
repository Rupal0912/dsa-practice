#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    cout<<"here is the array:";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    int sum=0;
    int product=1;
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<sum<<endl;
    cout<<product<<endl;
}