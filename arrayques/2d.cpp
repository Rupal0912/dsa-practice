#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            arr[i][j]=10;
        }
    }
        for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
