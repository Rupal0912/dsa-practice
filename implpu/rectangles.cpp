// #include <iostream>
// #include <vector>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int width;
//     static int count;  // Static data member to keep track of the number of rectangles

// public:
//     // Constructor increments the count when a new rectangle is created
//     Rectangle() : length(0), width(0) {
//         count++;
//     }

//     // Static member function to get the count of Rectangle objects created
//     static int getCount() {
//         return count;
//     }

//     // Member function to set the dimensions of the rectangle
//     void setDimensions(int len, int wid) {
//         length = len;
//         width = wid;
//     }

//     // Member function to calculate and return the area of the rectangle
//     int getArea() const {
//         return length * width;
//     }
// };

// // Initialize the static count variable
// int Rectangle::count = 0;

// int main() {
//     int n;
//     cout << "Enter the number of rectangles: ";
//     cin >> n;

//     vector<Rectangle> rectangles(n);  // Vector to hold Rectangle objects

//     // Input dimensions for each rectangle
//     for (int i = 0; i < n; i++) {
//         int len, wid;
//         cin >> len >> wid;
//         rectangles[i].setDimensions(len, wid);
//     }

//     // Output the total number of rectangles
//     cout << "Total number of rectangles: " << Rectangle::getCount() << endl;

//     // Output the area of each rectangle
//     for (int i = 0; i < n; i++) {
//         cout << "Area of rectangle " << i + 1 << ": " << rectangles[i].getArea() << endl;
//     }

//     return 0;
// }



//BETTER HAI  YE
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Arrays to store dimensions of rectangles
    int lengths[n], breadths[n];

    // Read dimensions for each rectangle
    for (int i = 0; i < n; i++) {
        cin >> lengths[i] >> breadths[i];
    }

    cout << "Total number of rectangles: " << n << endl;

    // Calculate and print area for each rectangle
    for (int i = 0; i < n; i++) {
        int area = lengths[i] * breadths[i];
        cout << "Area of rectangle " << (i + 1) << ": " << area << endl;
    }

    return 0;
}
