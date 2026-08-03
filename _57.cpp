// A
// AB
// ABC
// ABCD

#include <iostream>
using namespace std;
int main(){
    char n;
    cin >> n;
    for(char i='A';i<=n;i++){
        for(char j='A'; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
