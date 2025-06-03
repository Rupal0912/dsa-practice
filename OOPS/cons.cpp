#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    float gpa;
    //constructors ka use
    student(){
        //defaault
    }
    student(string s,int r){
        name=s;
        rollno=r;
        //gpa=g;
    }
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
    student s1("rupal",62);
    //cout<<s1.name<<" "<<s1.rollno<<endl;
    s1.gpa=8.2;
    student s2;
    s2.name="gjgdh";
    s2.rollno=34;
    s2.gpa=7.8;
    student  s3("gaagan",12,6.7);
    student s4("sgsgs",45,8.9);
    cout<<s1.name<<" "<<s1.rollno<<endl;
    print(s2);
    print(s3);
    print(s4);
}