//Calculate area and circumference of a circle.

#include <iostream>
using namespace std;

int main() {
    float r, area, circumfrence;
    cin>> r;
    float pi = 3.14159;
    //area = pi*r*r
  // cout << area;
    cout << "area is: " << (pi*r*r) << endl;
    cout << "perimeter is: " << 2*pi*r;
    
    return 0;
}
