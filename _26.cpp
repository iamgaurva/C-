//Check whether a character is a vowel or consonant.

#include <iostream>
using namespace std;

int main() {
	char ch;
	
	cout << "Enter a character: ";
	cin >> ch;
	
	if (ch == 'a' |ch == 'e'|ch == 'i'|ch == 'o'|ch == 'u'){
	    cout << "character is vowel";
	}
	else{
	    cout<<"character is consonant";
	}
	
	return 0;
}
