/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

void swapIntegers(int &a, int &b) { // Pass by reference
    int temp = a;
    a = b;
    b = temp;
    cout << "Swap function <> a = "<< a << "  b = " << b << endl;
}

int main() {
    int a = 15, b = 51;

    cout << "Before swapping <> a = "<< a << "  b = " << b << endl; 
    swapIntegers(a, b);
    cout << "After swapping <> a = "<< a << "  b = " << b << endl;
    
    return 0;
}
