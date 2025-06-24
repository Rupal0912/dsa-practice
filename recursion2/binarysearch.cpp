#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key, int low, int high) {
    if (low > high) {
        return -1; // base case: key not found
    }
    int mid = low + (high - low) / 2; // to avoid overflow
    if (arr[mid] == key) {
        return mid; // key found
    } else if (arr[mid] < key) {
        return binarysearch(arr, n, key, mid + 1, high); // search in right half
    } else {
        return binarysearch(arr, n, key, low, mid - 1); // search in left half
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    int result = binarysearch(arr, n, key, 0, n - 1);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}