#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the no. of rows/columns: ";
    cin>>m>>m;
   
    int arr[m][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
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
      
    

}