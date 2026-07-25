//Calculate percentage from five subject marks.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int math1, math2, math3, math4, math5;
    float percentage, total;
    cout << "Enter marks: ";
    cin >> math1 >> math2 >> math3 >> math4 >> math5;
    total = math1 + math2 + math3 + math4 + math5;
    percentage = (total/500) *100;
    
    cout << percentage;
    return 0;
}
