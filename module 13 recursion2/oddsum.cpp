#include<iostream>
using namespace std;
int sum1(int a,int b){
    //base case
    if(a>b) return 0;
    
    if(a%2!=0){
        return a + sum1(a+2,b);
    }
   else{
    return sum1(a+1,b);
   }
    }

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<sum1(a,b);
}