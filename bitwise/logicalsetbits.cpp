#include<iostream>
using namespace std;

int setbit(string result){
    int count=0;
    for(int i=0;i<=result.length()-1;i++){
        if(result[i]=='1'){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cout<<"enter a binary string: ";
    getline(cin,s);
    cout<<setbit(s)<<endl;
    
    
}