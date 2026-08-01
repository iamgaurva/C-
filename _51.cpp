//Armstrong number

#include <iostream>
using namespace std;

int main() {
    int n = 153;
    int sum = 0;
    int temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
