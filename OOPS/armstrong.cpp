#include <iostream>
using namespace std;

class armstrong {
private:
    int n; 

public:
    // Constructor to initialize 
    armstrong(int number) {
        n = number;
    }

    
    bool isArmstrong() {
        int originalNum, remainder, result = 0;
        originalNum = n;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        return (result == n);
    }

   
};

int main() {
   
    int number;
    cout << "Enter a number: ";
    cin >> number;
     armstrong a( number);

    

    if (a.isArmstrong()) {
        cout << number << " Armstrong number." << endl;
    } else {
        cout << number << " not an Armstrong number." << endl;
    }

    return 0;
}
