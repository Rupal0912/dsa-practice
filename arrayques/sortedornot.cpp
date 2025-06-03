#include<iostream>
#include<vector>
using namespace std;
bool issorted(vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
int main(){
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    bool result= issorted(nums);
    if(result){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"notsorted"<<endl;
    }
}