//Check whether a number is positive, negative, or zero.

#include <iostream>
using namespace std;

int main() {
    int a, positive, negative, zero ;
    cout << "Enter the number: ";
    cin>> a;
     
    positive = a > 0;
    negative = a < 0;
    zero = a == 0;
    
    if (positive){
        cout<< "The no is positive"<<endl;
    }
    else if(negative){
        cout<< "The no is negative"<<endl;
    }
    else{
        cout<< "The no is zero"<<endl;
    }
    
    return 0;
}
