#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){
    int n=a.size();
     for(int i=0;i<n;i++){
        if(i%2==0){  //glti ye thi bs ki a[i] value ni index p dhyan dena tha
            a[i]+=10;
            
        }
        else{
            a[i]*=2;
            
        }
        
    }
}
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"your array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 
   change(a);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
   
    
   
    
}