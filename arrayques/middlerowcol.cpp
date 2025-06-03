#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
int mid=n/2;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==mid|| j==mid){
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
            }
        cout<<endl;
    }


    
  
    
}