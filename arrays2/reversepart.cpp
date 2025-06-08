#include<iostream>
#include<vector>
using namespace std;
// void reversed(vector<int> &arr){
//      cout<<"reversed array:";
//     for(int i=arr.size();i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
void  display(vector<int> & a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversedpart(int i,int j,vector<int> &arr){
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elemnets: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversedpart(0,3,arr);
    display(arr);
    // cout<<"reversed array:";
    // for(int i=arr.size()-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
   
}