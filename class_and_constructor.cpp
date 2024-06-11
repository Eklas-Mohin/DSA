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
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }
    void areaOfTheRectangle() {
        area = length * breadth;
        cout <<"Area = " << area << endl;
    }
    void changeLength(double l) {
        length = l;
    }
};

int main() {
    Rectangle r(16, 15);

    r.areaOfTheRectangle();
    r.changeLength(20);
    r.areaOfTheRectangle();

    return 0;
}
