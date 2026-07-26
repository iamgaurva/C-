//Find whether a student has passed or failed based on marks.

#include <iostream>
using namespace std;

int main() {
	int marks;
	cin>>marks;
	if(marks >= 30){
	    cout << "Student Pass";
	}
	else{
	    cout << "Student fail";
	}
	return 0;
}
