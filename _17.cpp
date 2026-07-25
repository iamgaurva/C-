//Find the power of a number.

#include <iostream>
#include <cmath> //bcz pow() get defined in this library
using namespace std;

int main() {
    double base, result;
    int power;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;

    result = pow(base, power);

    cout << base << " raised to the power " << power << " is " << result;

    return 0;
}
