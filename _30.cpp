//Calculator

#include <iostream>
using namespace std;

int main(){
  int a, b;
  char op;
  cin >> a;
  cin >> op ;
  cin >> b;
  
  switch(op){
      case'+':
      cout << "sum: " << a +b;
      break;
      case'-':
      cout << "diff: " << a - b;
      break;
      case'*':
      cout << "product: " << a *b;
      break;
      case'/':
      if (b != 0)
        cout << "div = " << a /b;
        else
            cout << "Error!";
        break;
  }
  return 0;
}
