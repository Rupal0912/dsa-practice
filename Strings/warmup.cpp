#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    
    cin>>s;
    int l=s.length();

    int count=0;
    for(int i=0;i<l;i++){
        if(i==0){
            if(s[i]!=s[i+1])
            count++;
        }
        else if(i==l-1){
            if(s[i]!=s[i-1])
            count++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
        
    }
    cout<<count;

}