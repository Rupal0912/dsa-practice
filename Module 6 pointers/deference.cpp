// #include<iostream>
// using namespace std;
// int main(){
//     int x=122;
//     int*p=&x;
//     int &ref=x;
//     ref=2;
//     cout<<x<<endl;
//     cout<<p;
//     // cout<<x<<endl;
//     // *p=4;
//     // cout<<x;

// }
#include <iostream>
using namespace std;

int main() {
    char p[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; 
    char* q;

    q = p;  

    cout << *q;          
    cout << *(q + 1);    
    cout << *(q + 2);    
    cout << *(q + 3);    
    cout << *(q + 4);    
    cout << *(q + 5);    

    q = q + 6;

    cout << *p;
    return 0;
}