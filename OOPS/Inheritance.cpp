#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
    person(){
        cout<<"parent constructor..\n";
    }
};
class student: public  person{
    public:
    int roll;
    student(string name,int age,int roll): person(name,age){
        this->roll=roll;
        //cout<<"child constructor...\n";
    }
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll: "<<roll<<endl;
    }
};
int main(){
    student s1("rahul",21,1234);
    // s1.name="rahul";
    // s1.age=21;
    // s1.roll=1234;
    s1.getinfo();
}