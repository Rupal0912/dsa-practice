#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int r,s;
    cin>>r>>s;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    int b[r][s];
      for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            cin>>b[i][j];
        }
    }
     int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            b[i][j]=a[i][j]+b[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
}