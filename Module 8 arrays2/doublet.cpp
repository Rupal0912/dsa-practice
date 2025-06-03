#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size";
    cin>>n;
    vector<int> v;
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
int x;
cout<<"enter target:";
cin>>x;

    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
             if(v[i] +v[j]==x)    {
                cout<<"pairs is "<<"("<<i  <<","<<j<<")"<<endl;
             }
        }
       
        
    }
}