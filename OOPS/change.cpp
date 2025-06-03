#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
}
void change(Car &c){
    c.name="swift";
}
int main(){
    Car c1;
    c1.name="hondaa city";
    c1.price=1800000;
    c1.seats=5;
    print(c1);
    change(c1);  //pass by value ho ra
    print(c1);
    // Car c2;
    // c2.name="swift";
    // c2.price=800000;
    // c2.seats=5;
    // // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats;
    // print(c1);
    // print(c2);
}