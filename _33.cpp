// Check whether three sides can form a triangle.

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>> a>>b>>c;
    if( a+b>c && a+c>b && b+c>a){
        cout<<"Triangle can be formed";
    }
    else{
        cout<< "Can't form the triangle";
    }
    
    return 0;
}
