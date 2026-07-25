//Calculate simple interest.

#include <iostream>
using namespace std;

int main() {
    float principle, rate, time, simpleinterest;
  
    cout << "enter p: ";
    cin>>principle;
    
    cout << "enter r: ";
    cin>>rate;
    
    cout << "enter t: ";
    cin>>time;
    
    cout << "simpleinterest is: " << (principle*rate*time)/100 << endl;
    
    return 0;
}
