/**
 *    author: mohin
 **/

#include <bits/stdc++.h>

using namespace std;

template <class T>
class Arithmetic {
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    T mul();
    T div();
};
    template <class T>
    Arithmetic<T>::Arithmetic(T a, T b) {
        this->a = a;
        this->b = b;
    }
    template <class T>
    T Arithmetic<T>::add() {
        return a + b;
    }
    template <class T>
    T Arithmetic<T>::sub() {
        return a - b;
    }
    template <class T>
    T Arithmetic<T>::mul() {
        return a * b;
    }
    template <class T>
    T Arithmetic<T>::div() {
        return a / b;
    }

int main() {
    Arithmetic<int> obj1(258, 852);

    cout << "Sum = " << obj1.add() << endl;
    cout << "Sub = " << obj1.sub() << endl;
    cout << "Mul = " << obj1.mul() << endl;
    cout << "Div = " << obj1.div() << endl;

    Arithmetic<float> obj2(258.25, 852.52);

    cout << "Sum = " << obj2.add() << endl;
    cout << "Sub = " << obj2.sub() << endl;
    cout << "Mul = " << obj2.mul() << endl;
    cout << "Div = " << obj2.div() << endl;

    return 0;
}
