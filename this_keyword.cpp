/**
 *    author: mohin
 **/

#include <bits/stdc++.h>

using namespace std;

class Arithmetic {
private:
    int a;
    int b;

public:
    Arithmetic() {
        a = 0;
        b = 0;
    }
    Arithmetic(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int add() {
        return a + b;
    }
    int sub() {
        return a - b;
    }
};

int main() {
    Arithmetic obj1;

    int sum = obj1.add();
    int sub = obj1.sub();
    cout << "Sum = " << sum << endl;
    cout << "Sub = " << sub << endl;

    Arithmetic obj2(125, 521);

    sum = obj2.add();
    sub = obj2.sub();
    cout << "Sum = " << sum << endl;
    cout << "Sub = " << sub << endl;

    return 0;
}
