#include<iostream>
using namespace std;

class cricketer{
    public:

string name;
    int runs;
    float avg;

    cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    void print(int runs){
        cout<<name<<" "<<this->runs<<" "<<avg<<endl;
    }
    int matches(){
        return runs/avg;
    }
};
int main(){
    cricketer c1("virat kohli",25000,55.2);
    cricketer c2("rohit sharma",18000,47.8);
    c1.name="ghg";
    c1.print(5);
    c2.print(7);
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
}
