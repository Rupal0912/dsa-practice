#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of 1st matrix:";
    cin>>m;
    int n;
    cout<<"enter columns of 1st matrix:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

      for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
  
}