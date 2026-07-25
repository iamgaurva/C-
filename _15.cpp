//Convert seconds into hours, minutes, and seconds.

#include <iostream>
using namespace std;

int main() {
    int totalseconds, hour, mintues, seconds;
    cin>> totalseconds;
    
    hour = totalseconds / 3600;
    totalseconds = totalseconds % 3600;
    
    mintues = totalseconds / 60;
    seconds = totalseconds % 60;
    
    cout << hour<< endl;
    cout << mintues<< endl;
    cout << seconds;
}
