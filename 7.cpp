//Swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
  
    swap(a, b);

    cout << "After swapping:\n";
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;

    return 0;
}
