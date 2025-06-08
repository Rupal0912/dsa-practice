#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number:";
    cin >> number;
    int sum = 0;
    // int product=1;
    while (number > 0)
    {
        int lastdigit = number % 10; // extract the last digit
        if (lastdigit % 2 == 0)
        {
            sum += lastdigit;
            //cout << lastdigit;
        }
        else
        {
            cout << 0;
        }
        // product*=number%10;
        number /= 10; // remove the last digit
    }
    cout << "sum=" << sum << endl;
    // cout<<"product="<<product<<endl;
}