//Check whether a number is divisible by both 5 and 11.

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	if( a % 5 == 0 && a % 11 == 0 ){
	    cout<< "divisible";
	}
	else{
	    cout << "error";
	}
	return 0;
}
