#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
  
};
class student: public  person{
    public:
    int roll;
   
};
class gradstudent : public student{
    public:
    string researcharea;
};
int main(){
   gradstudent s1;

    s1.name="rahul";
    s1.researcharea="quantum phy";
    s1.age=21;
    s1.roll=1234;
   cout<<s1.name<<endl;
   cout<<s1.researcharea<<endl;
}