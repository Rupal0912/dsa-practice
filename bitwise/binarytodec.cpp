#include<iostream>
using namespace std;
int binarytodecimal(string &binary){
    int n=binary.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch =binary[i];
        int num=ch-'0';
        result =result +num*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string str="001011";
    cout<<binarytodecimal(str)<<endl;
    return 0;
}