// Take a name as input and print a greeting.

#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name;
} 
//Only print Hello Kumar
// to print whole line use getline

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name;

    return 0;
}
