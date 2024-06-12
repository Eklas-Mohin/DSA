/**
 *    author: mohin
 **/

#include <bits/stdc++.h>

using namespace std;

class Rectangle {
private:
    double length;
    double breadth;
    double area;

public:
    Rectangle() { // Default constructor
        length = 0;
        breadth = 0;
    }
    Rectangle(double l, double b) { // Parameterized constructor
        length = l;
        breadth = b;
    }
    void areaOfTheRectangle() {
        area = length * breadth;
        cout << "Area = " << area << endl;
    }
    void changeLength(double l) {
        length = l;
    }
    void setRectangle(double l, double b) {
        length = l;
        breadth = b;
    }
};

int main() {
    Rectangle r1(16, 15);

    r1.areaOfTheRectangle();
    r1.changeLength(20);
    r1.areaOfTheRectangle();

    Rectangle r2;

    r2.areaOfTheRectangle();
    r2.setRectangle(12, 12);
    r2.areaOfTheRectangle();

    return 0;
}
