#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

int max= arr[0][0];

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]>max && max<arr[i][j]) max=arr[i][j];
        }
        
    }
int secmax=arr[0][0];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=max && secmax<arr[i][j]) secmax=arr[i][j];
        }
        
    }
    cout<<secmax;
}