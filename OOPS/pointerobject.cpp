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
   

};

 void change(cricketer *c){
        //(*c).avg=77.2;
        c->avg=68.9;
        
    }
int main(){
    cricketer c1("virat kohli",25000,55.2);
    cricketer c2("rohit sharma",18000,47.8);
//    cricketer* p1=&c1;
//    cout<<(*p1).runs<<endl;
 cout<<c1.avg<<endl;
   change(&c1);
    cout<<c1.avg<<endl;
}
