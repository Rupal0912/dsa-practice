#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
   
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     int maxsum=a[0][0];
     int maxrowindex=0;
     for(int i=0;i<n;i++){
        int currentrowsum=0;
        for(int j=0;j<m;j++){
            currentrowsum+=a[i][j];
        }
        if(currentrowsum>maxsum){
            maxsum=currentrowsum;
            maxrowindex=i;
        }
     }
     cout<<maxrowindex;

  
    
}