#include <iostream>
using namespace std;
class Shape {
public:
    Shape() {
        cout << "Shape constructor called" <<endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle() {
        cout << "Rectangle constructor called" <<endl;
    }
};

int main() {
    Rectangle rect; 
    return 0;
}
