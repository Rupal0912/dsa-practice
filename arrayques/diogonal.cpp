#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(j==i || i+j==(n-1)) cout<<a[i][j]<<" ";
            else cout<<" "<<" ";
        }
        
        cout<<endl;
    }
}