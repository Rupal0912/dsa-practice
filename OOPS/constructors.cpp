#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    float gpa;
    //constructors ka use
    student(string s,int r,float g){
        name=s;
        rollno=r;
        gpa=g;
    }
};
void print(student s){
    cout<<s.name<<" "<<s.rollno<<" "<<s.gpa<<endl;
}
int main(){
    student s1("rupal",8.3,76);
    //cout<<s1.name<<" "<<s1.rollno<<endl;
    print(s1);
}