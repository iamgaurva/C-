//Swap two numbers using a third variable.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    // a = 5 b =10 c = null
    c = a; // c = 5
    a = b; // a = 10
    b = c; // b = 5 

    cout << "After swapping:\n";
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;

    return 0;
}
