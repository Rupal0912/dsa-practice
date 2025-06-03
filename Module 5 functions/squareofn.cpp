#include<iostream>
using namespace std;
int sqr(int num){
    return num*num;
}
void firstnsqrs(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<sqr(i) <<endl;
    }
}
int main(){
    int n;
    cin>>n;
    firstnsqrs(n);
    return 0;
}
