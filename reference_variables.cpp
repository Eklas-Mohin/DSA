/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 10;
    int &r = x; // r is alias of x
    // Reference variables must be initialized during declaration

    cout << "x = " << x << endl;
    cout << "r = " << r << endl;

    // x and r has same memory address
    cout << "&x = " << &x << endl;
    cout << "&r = " << &r << endl;
    r += 3;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;

    int y = 100;
    r = y;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;

    return 0;
}
