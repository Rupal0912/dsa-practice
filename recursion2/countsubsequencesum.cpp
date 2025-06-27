#include <iostream>
#include <vector>
using namespace std;

int countWays(int i, int sum, vector<int>& arr) {
    if (i == arr.size()) {
        return sum == 0 ? 1 : 0;
    }

    // pick
    int left = countWays(i + 1, sum - arr[i], arr);

    // not pick
    int right = countWays(i + 1, sum, arr);

    return left + right;
}

int main() {
    vector<int> arr = {1, 2, 1};
    int target = 2;
    int count = countWays(0, target, arr);
    cout << "Total ways = " << count << endl;
    return 0;
}
