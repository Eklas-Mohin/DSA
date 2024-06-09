/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 10;
    int &r = x; // r is alias of x
    /*
    reference variables must be 
    initialized during declaration
    */ 
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;
    r += 1; // x += 1
    // r and x has same memory address
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;
    x += 2;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;
    int y = 100;
    r = y;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;
    return 0;
}
