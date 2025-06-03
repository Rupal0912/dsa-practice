//  Given a +ve integer, return true if it is a power of 2.
#include<iostream>
using namespace std;
bool power(int a){
    //base case
   if(a==1) return true; //iska mtlb 1 power of 2 hai
   if(a<=0 || a%2!=0) return false;//if a negative ya not divisible h to false return kro
   return power(a/2); //recursive approach me us number ko divide krk jo aae vo bjejo phir vhi same cheex repeat kregi

}
int main(){
    int n;
    cout<<"enter the positive integer: ";
    cin>>n;
    if(power(n)){
        cout<<n<<" true"<<endl;
    }
    else{
        cout<<n<<" false"<<endl;
    }
}