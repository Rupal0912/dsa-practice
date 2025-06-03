#include <iostream>
#include <cmath>
using namespace std;

// Inline function to check if a number is an Armstrong number
inline bool isArmstrong(int n) {
    int originalNumber = n;
    int sum = 0;
    int numDigits = 0;

    // Calculate number of digits
    while (n > 0) {
        n /= 10;
        numDigits++;
    }

    n = originalNumber;
    
    // Calculate the sum of each digit raised to the power of number of digits
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return sum == originalNumber;
}

// Inline function to print the factors of a number
inline void printFactors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number" << endl;
        printFactors(n);
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }

    return 0;
}
