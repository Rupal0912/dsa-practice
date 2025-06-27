#include<iostream>
#include<vector>
using namespace std;    
void printsubsequences(int idx, vector<int>& arr, vector<int>& temp) {
    if(idx == arr.size()){
        cout<< "{";
        for(int x: temp) cout<< x<<" ";
        cout<<"}"<<endl;
        return;
    }
    // pick the current element
    temp.push_back(arr[idx]);
    printsubsequences(idx+1, arr, temp);
    // don't pick the current element
    temp.pop_back();
    printsubsequences(idx+1, arr, temp);
}
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> temp;
    printsubsequences(0, arr, temp);
    return 0;
}
