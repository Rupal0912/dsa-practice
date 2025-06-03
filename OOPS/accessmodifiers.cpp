#include<iostream>
using namespace std;
class teacher{
    private:
    int salary;
    public:
    string name;
    string subject;
    string dept;
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
    teacher t1;
    t1.name="sharaddha";
    t1.dept="cse";
    t1.subject="c++";
    t1.setsalary(34000);
    cout<<t1.name<<" "<<t1.dept<<" "<<endl;
    cout<<t1.subject<<" " <<t1.getsalary();
}