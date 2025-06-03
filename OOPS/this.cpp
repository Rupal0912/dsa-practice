#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;

    Cricketer(string name,int runs){
        this->name=name;
        this->runs=runs;
    }
};
int main(){
    Cricketer c1("vk",25000);
    Cricketer c2("rs",18000);
    // c1.name="virat";
    // c1.runs=25000;
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
    


}