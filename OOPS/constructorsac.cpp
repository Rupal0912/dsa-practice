#include<iostream>
using namespace std;
class teacher{
    private:
    int salary;
    public:
    string name;
    string subject;
    string dept;
    //default
    teacher(){
        cout<<"this is constructor..."<<endl;
        dept = "computer science";
    }
    //parametersized
    teacher(string name,string dept,string subject){
        this->name=name;
        this->dept=dept;
       this->subject=subject; 
    }
    //copy constructor
    teacher(teacher &orgobj){
        cout<<"custom copy constructor!!"<<endl;
        this->name=orgobj.name;
        this->dept=orgobj.dept;
        this->subject=orgobj.subject;
    }
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"dept: "<<dept<<endl;
        cout<<"subject: "<<subject<<endl;
    }
    //member function or say 
    void changedept(string newdept){
        dept=newdept;
    }
    void setsalary(double s){
        salary =s;
    }
    double getsalary(){
        return salary;
    }
};
int main(){
    teacher t1("sharaddha","c++","cse");
    teacher t2(t1);
    t2.getinfo();
    // t1.name="sharaddha";
    // // t1.dept="cse";
    // t1.subject="c++";
    // t1.setsalary(34000);
    // cout<<t1.name<<" "<<t1.dept<<" "<<endl;
    // cout<<t1.subject<<" " <<t1.getsalary();
}