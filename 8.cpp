//Convert Celsius to Fahrenheit.
// formula :  fahrenheit = (celsius * 9 / 5) + 32;
#include <iostream>
using namespace std;

int main() {
    //  fahrenheit = (celsius * 9 / 5) + 32;
    
    float celsius, fahrenheit;
    cout << "Enter temp in celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;  // (celsius*1.8)+32
    cout<< fahrenheit<< endl;

    return 0;
}
