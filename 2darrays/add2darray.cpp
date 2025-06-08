#include<iostream>
using namespace std;
int main(){
   int a[2][3]={1,2,3,4,5,6};
   int b[2][3]={5, 6, 7, 8, 9,0};
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
cout<<endl;
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        b[i][j]+=a[i][j];
    }
    
   }

      for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
   }
   
}