#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    // int sum=0;
    // int product=1;
    // while(number>0){
    //      int lastdigit=number%10; //extract the last digit
    //      sum+=lastdigit;
    //      product*=number%10;
    //      number/=10; //remove the last digit
    // }
    // cout<<"sum="<<sum<<endl;
    // cout<<"product="<<product<<endl;
    int sum=0;
    while(number>0){
        int lastdigit= number%10;
        sum=sum+lastdigit;
        number/=10;
    }
    cout<<"sum"<<sum<<endl;
}
