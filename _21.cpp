//Find the largest of two numbers.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, largest;
    cout<<"Enter number: ";
    cin>>a >>b;
    
    cout << (a > b ? a : b) << " is the largest."; // (condition ? if_true : if_false)
    
    return 0;
}
