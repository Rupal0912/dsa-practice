#include<iostream>
#include<fstream>
using namespace std;

class employee{
    private:
    int emp_code;
    char name[20];
    int hra;
    int daa;
    int ta;
    public:
    void read_data(){
        cout<<"\n\n Enter the employee code: ";
        cin>>emp_code;
        cout<<"\n\n Enter the name of employee: ";
        cin>>name;
        cout<<"\n\n Enter the HRA,DA and TA: ";
    }
    void show_data(){
        cout<<"\n\n EMP CODE: "<<emp_code;
        cout<<"\n\n NAME: "<<name;
        cout<<"\n\n "<<hra<<daa<<ta;
    }
};
int main(){
employee e;
//e.read_data();
//FILE.write((char*)e,sizeof(e[i]))
for(int i=0;i<3;i++){
e[i].read_data();
FILE.write((char *)&e[i],sizeof(e[i]));

}

FILE.close();
FILE.open("employee",ios::in|ios library)
}