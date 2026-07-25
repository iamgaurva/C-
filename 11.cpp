//Calculate area and perimeter of a rectangle.

#include <iostream>
using namespace std;

int main() {
    float l, b, area, perimeter;
    cin>> l >> b;
    
    cout << "area is: " << (l*b) << endl;
    cout << "perimeter is: " << 2*(l+b);
    
    return 0;
}
