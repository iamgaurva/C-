//Check whether a character is alphabet, digit, or special symbol.

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "Alphabet";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit";
    }
    else {
        cout << "Special Symbol";
    }

    return 0;
}
