#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter day number:";
    cin>>x;
    switch(x){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tueday";
        break;
        case 3:
        cout<<"wednesdaay";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturaday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"invalid number";
    }
}