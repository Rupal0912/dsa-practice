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
int x;
cout<<"enter the element u want to search";
cin>>x;
//search
//checkmark
bool flag=false; //false mtlb not present
    // cout<<"here is the array:";
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"element found";
    else cout<<"404 element not found";

}