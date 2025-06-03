#include<iostream>
#include<vector>

using namespace std;
int main(){
vector<int> v;
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
cout<<"size od v:"<<v.size()<<endl;
cout<<"capacity od v:"<<v.capacity()<<endl;
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
cout<<"size od v:"<<v.size()<<endl;
cout<<"capacity od v:"<<v.capacity()<<endl;


}