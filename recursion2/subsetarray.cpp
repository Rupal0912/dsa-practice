#include<iostream>
using namespace std;
void printsubset(string ans, int arr[], int n, int idx){
    if(idx == n){
        cout<< ans<< endl;
        return;
    }
    printsubset(ans, arr, n, idx+1);
    printsubset(ans+ to_string(arr[idx]),arr, n , idx+1);
}
int main(){
    int arr[]= {1, 2, 3};
    int n= sizeof(arr)/sizeof(arr[0]);
    printsubset("",arr,n,0);
    return 0;
}