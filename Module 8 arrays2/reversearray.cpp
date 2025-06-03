#include<iostream>
#include<vector>
using namespace std;
void reversed(vector<int> &arr){
     cout<<"reversed array:";
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    reversed(arr);
    // cout<<"reversed array:";
    // for(int i=arr.size()-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
   
}