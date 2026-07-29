//Print multiplication tables from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Table of " << i << endl;

        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl;
    }

    return 0;
}

//yeahhhhhhhhhhhhhhhhhh
