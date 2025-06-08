#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    display(v);
    //reverse
int i=0;
int j=v.size()-1;
while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
j--;
}

display(v);
}
