//Check whether a character is uppercase or lowercase.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase";
    }
    else if(ch >= 'a' && ch <= 'z') {
        cout << "Lowercase";
    }

    return 0;
}
