// #include<iostream>
// using namespace std;

// class cricketer{
//     public:
//     string name;
//     int runs;
//     float avg;

//     cricketer(string name,int runs,float avg){
//         this->name=name;
//         this->runs=runs;
//         this->avg=avg;
//     }
   

// };


// int main(){
//     cricketer c1("virat kohli",25000,55.2);
//     cricketer * c2=new cricketer("rohit sharma",18000,47.8);
//     cout<<c1.name<<" "<<c1.runs<<endl;
//     cout<<(*c2).name<<" "<<(*c2).runs<<endl;
//     cout<<c2->name<<" "<<c2->runs<<endl;
//     int x1=5;
//     int * ptr=new int(6);
// }

#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[m];
    }
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[n];
    }
    
    int merged[m+n];
    for(int i=0;i<m;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<n;i++){
        merged[m+i]=arr2[i];
    }
    for(int i=0;i<m+n;i++){
        cout<<merged[i]<<" ";
    }
}