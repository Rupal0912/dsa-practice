#include<iostream>
using namespace std;
int countsetbits(int n){
    return __builtin_popcount(n);
}
int main(){
    cout<<countsetbits(8)<<endl;
}