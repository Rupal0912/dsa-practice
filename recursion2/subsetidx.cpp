#include<iostream>
using namespace std;
void printsubset(string ans, string original, int n, int idx){
    if(idx==n){
        cout<<ans<<endl;
        return;
    }
    printsubset(ans, original, n, idx + 1); // Exclude the current character
    printsubset(ans + original[idx], original, n, idx + 1); // Include the current character
    
}
int main(){
    string str="abc";
    int n=str.length();
    printsubset("", str, n, 0);
    return 0;
}