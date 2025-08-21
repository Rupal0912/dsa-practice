// #include<iostream>
// using namespace std;
// class print{
//     public:
//     void show(int x){
//         cout<<"int: "<<x<<endl;
//     }
//     void show(char ch){
//         cout<<"char: "<<ch<<endl;
//     }
// };
// int main(){
//     print p1;
//     p1.show(23);
//     p1.show('a');
//     return 0;
// }
#include <iostream>
using namespace std;
class parent{
    public:
    string name;
    parent(string n){
        name= n;
    }
    void gifts(){
        cout<<"parent "<<name<<" gives gifts.\n";
    }
    void gifts(string g){
        cout<<"parent "<< name<< " gives "<<g<<"\n";
    }
    void gifts(int c, string b){
        cout<< "parent "<<name<<" gifts on ocassion "<<b<<" rs "<<c<<"\n";
    }
};
int main() {
    parent dad("david");
    dad.gifts();
    dad.gifts("piano");
    dad.gifts(1000, "birthday");
}