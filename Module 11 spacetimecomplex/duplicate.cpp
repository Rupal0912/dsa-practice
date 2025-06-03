#include<iostream>
#include<vector>
using namespace std;
int main(){
    //bruteforce
//     int n;
//     cin>>n;
//     int arr[n];

//       for(int i=0;i<n;i++){
//        cin>>arr[i];
//     }
//     cout<<endl;
    
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]){
//             cout<<arr[i];
//             flag=true;
//             break;
//         }
//     }
//     if(flag==true) break;
// }


//optimized
int m;
cin>>m;

vector <int> arr(m+1);

for(int i=0;i<m+1;i++){
    cin>>arr[i];
}
cout<<endl;
int sum=0;

 m=arr.size()-1;
for(int i=0;i<m+1;i++){
    sum+=arr[i];
}
cout<<sum<<endl;
int s=m*(m+1)/2;
cout<<s<<endl;
cout<<sum-s;
}