#include<iostream>
using namespace std;
class Student{
    public:
    float cgpa;
    int rollno;
    string name;

};
int main(){
    Student s1;
    //s1.name="rupal";
    s1.rollno=62;
    s1.cgpa=7;
    cin>>s1.name;
    Student s2;
    s2.name="himanshu";
    s2.rollno=23;
    s2.cgpa=6.2;
    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rollno<<endl;

}