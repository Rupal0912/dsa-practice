#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3;
    cout<<"enter the 1st side:";
    cin>>s1;
    cout<<"enter the 2nd side:";
    cin>>s2;
    cout<<"enter the 3rd side:";
    cin>>s3;
    if((s1+s2>s3) && (s2+s3>s1) && (s1+s3>s2)){
        cout<<"triangle";
    }
    else{
        cout<<"Invalid triangle";
    }

}