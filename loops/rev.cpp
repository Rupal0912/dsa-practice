#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    int rev=0;
    int lastdigit=number;
    while(lastdigit>0){
        rev=rev*10;
        //lastdigit=lastdigit%10;
        rev+=(lastdigit%10);
        lastdigit/=10;
    }
    cout<<rev+number<<endl;
    
}