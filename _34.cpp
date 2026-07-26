//Classify a triangle.
//Given the three sides of a triangle, determine what type of triangle it is.

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin>> a>>b>>c;
	if( a+b>c && a+c>b && b+c>a) {
	}
	else {
		cout<< "Can't form the triangle";
	}
	
	if (a=b=c){
	    cout <<"E";
	}
	else if(a==b || b==c || a==c){
	    cout<<"I";
	}else{
	    cout<<"s";
	}

	return 0;
}
