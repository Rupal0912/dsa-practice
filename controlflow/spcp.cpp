#include<iostream>
using namespace std;
int main(){
    float sp,cp;
    cout<<"enter the cp:";
    cin>>cp;
    cout<<"enter the sp:";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit ="<<sp-cp;
    }
    else{
        cout<<"loss ="<<cp-sp;
    }

}