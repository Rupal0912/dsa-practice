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

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=i+2;k<n;k++){
                if(v[i] +v[j]+v[k]==x)    {
                cout<<"pairs is "<<"("<<i  <<","<<j<<","<<k<<")"<<endl;
             }
            }
             
        }
       
        
    }
}