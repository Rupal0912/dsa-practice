#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
   if(b%2==0){
    int ans=power(a,b/2);
    return ans*ans;
   
   }
   if(b%2!=0){
    int ans=power(a,b/2);
    return ans*ans*a;
   }

}
int main(){
    int a;
    cout<<"enter base: ";
    cin>>a;
    int b;
    cout<<"enter exponent: ";
    cin>>b;

    cout<<power(a,b);
}
