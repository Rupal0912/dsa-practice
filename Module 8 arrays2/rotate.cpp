#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int> &v){
    // for(int i=v.size()-1;i>=0;i--){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"eneter size:";
    cin>>n;
    vector<int> a(n);;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    display(a);
    int k=2;
    k%n;
    //rotate
    // int n=a.size();
    reversepart(0,a.size()-k-1,a);
    reversepart(a.size()-k,a.size()-1,a);
    reversepart(0,a.size()-1,a);
    display(a);

}