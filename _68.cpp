//prime number

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n <= 1)
		cout<< "not prime";
  
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			cout<<"not prime";
		else{
		    cout<<"Prime";
		}
	}


	return 0;
}
