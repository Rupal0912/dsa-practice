#include <iostream>
using namespace std;
class Rectangle {
private:
    float* length;
    float* breadth;
public:
    Rectangle(float l, float b) {
        length = new float;
        breadth = new float;
        *length = l;
        *breadth = b;
    }
    float area() const {
        return (*length) * (*breadth);
    }
    ~Rectangle() {
        delete length;
        delete breadth;
        cout << "Memory deallocated!" << endl;
    }
};
int main() {
    Rectangle rect(5.0, 3.5);
    cout << "Area of the rectangle: " << rect.area() << endl;
    return 0;
}