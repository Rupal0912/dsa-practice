#include<iostream>
#include<math.h>
using  namespace std;
int main(){
    int n;
    int factorial=1;
    cout<<"enter n:";
    cin>>n;
   if(n<0){
    cout<<"factorial not defined"<< endl;
   }
   else{
    for(int i=1;i<=n;i++){
        factorial*= i;
    }
    cout<<"factorial of "<< n <<" is " <<factorial<<endl;
   }
}