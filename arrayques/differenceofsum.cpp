#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"your array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int sum1=0;
    for(int i=0;i<n;i=i+2){
        sum1+=a[i];
    }
    cout<<sum1;
    cout<<endl;
    int sum2=0;
    for(int i=1;i<n;i=i+2){
        sum2+=a[i];
    }
    cout<<sum2;
    cout<<endl;
    int differ=sum1-sum2;
    cout<<differ;
}