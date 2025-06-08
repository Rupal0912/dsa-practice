#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no. of rows: ";
    cin>>m;
    int n;
    cout<<"enter the no. of colums: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
for(int i=0;i<=m-1;i++){
        for(int j=i+1;j<=m-1;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
        cout<<endl;
    } 
    cout<<endl;
    
      for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;  

cout<<"rotated: "<<endl;
//reverse each row
for(int i=m-1;i>=0;i--){
    for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";
}

cout<<endl;
}
}