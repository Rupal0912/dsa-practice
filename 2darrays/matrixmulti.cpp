#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of 1st matrix:";
    cin>>m;
    int n;
    cout<<"enter columns of 1st matrix:";
    cin>>n;
      int p;
    cout<<"enter rows of 2nd matrix:";
    cin>>p;
    int q;
    cout<<"enter columns of 2nd matrix:";
    cin>>q;
    if(n==p){
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;



   
    int arr1[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;

    int  res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            //multiply
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=arr[i][k]*arr1[k][j];
            }

        }
    }
    
            for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            //multiply
            cout<<res[i][j]<<" ";

        }
        cout<<endl;
    }
}
    else{
        cout<<"the mtrices cannot be multiplied";
    }
    
}