#include<iostream>
using namespace  std;
class person{
    public:
    string name;
    int age;

};
class student:public person{
    public:
    int roll;
};
class teacher: public person{
    public:
    string subject;
}
;
int main(){
    teacher t1;
    t1.name="rahul";
    t1.roll=23;
    t1.age=33;
    t1.subject="abc";
    cout<<t1.roll<<endl;
    cout<<t1.age<<endl;
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
}
