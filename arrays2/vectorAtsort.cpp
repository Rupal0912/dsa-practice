#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> v;
v.push_back(9);
v.push_back(92);
v.push_back(91);
v.push_back(19);
// cout<<v.at(2)<<endl;  //access krne k liye

// cout<<v[0]<<endl;
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;

//sort
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}

}