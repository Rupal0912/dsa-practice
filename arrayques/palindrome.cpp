#include<iostream>
#include<vector>
using namespace std;
bool ispalindrome(vector<int> &nums){
    int n=nums.size();
        for(int i=0;i<n/2;i++){
            if(nums[i]==nums[n-i-1]){
                return true;
            }
        }
        return false;
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
    bool result= ispalindrome(nums);
    if(result){
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"No ,it is not a palindrome"<<endl;
    }
}