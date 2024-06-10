/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

void swap_num(int &a, int &b) { // Call by reference
    int temp = a;
    a = b;
    b = temp;
    cout << "swap function <> a = "<< a << "  b = " << b << endl;
}

int main() {
    int a = 15, b = 51;

    cout << "before swapping <> a = "<< a << "  b = " << b << endl; 
    swap_num(a, b);
    cout << "after swapping <> a = "<< a << "  b = " << b << endl;
    
    return 0;
}
