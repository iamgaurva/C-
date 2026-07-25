//Convert total days into years, months, and days.

#include <iostream>
using namespace std;

int main() {
    int totaldays, year, month, days;
    cin>> totaldays;
    
    year = totaldays / 365;
    totaldays = totaldays % 365;
    
    month = totaldays / 30;
    days = totaldays % 30;
    
    cout << year<< endl;
    cout << month<< endl;
    cout << days;
}
