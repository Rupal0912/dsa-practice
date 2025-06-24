#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b; // base case: if b is 0, gcd is a
    }
    return gcd(b%a, a );
}
int main(){
    int a=27;
    int b=36;
    cout<<gcd(b, a);

}