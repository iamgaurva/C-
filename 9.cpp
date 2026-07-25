//Convert Fahrenheit to Celsius.

#include <iostream>
using namespace std;

int main() {
    //celsius = (fahrenheit - 32) * 5 / 9;
    
    float celsius, fahrenheit;
    cout << "Enter temp in fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout<< celsius << endl;

    return 0;
}
