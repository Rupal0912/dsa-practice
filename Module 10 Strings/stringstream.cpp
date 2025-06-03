#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        cout<<temp<<endl;
    }
}