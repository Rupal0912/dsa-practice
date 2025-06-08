#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    int n;
 int k;
 cout<<"enter k:";
 cin>>k;
    cout<<"enter n:";
    cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<endl;    
     int len=0;
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==k){
                len=max(len,j-i+1);
            }
        }
     }
     cout<<len<<endl;

}