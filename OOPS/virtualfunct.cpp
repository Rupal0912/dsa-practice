#include<iostream>
using namespace std;
class parent{
    public:
    void getinfo(){
        cout<<"parent class....";

    }
    virtual void hello(){
        cout<<"hello from par\n";
    }
};
class child: public parent{
    public:
    void getinfo(){
        cout<<"child class...";
    }
     void hello(){
        cout<<"hello from child\n";
    }
};
int main(){
child c1;
c1.getinfo();
c1.hello();
}