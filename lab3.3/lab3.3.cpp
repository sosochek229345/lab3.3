#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    double y;

    cout << " x = ";
    cin >> x;

    if (x >= -4 && x < 0) {
        y = -1;
    }
    else if (x >= 0 && x < 1) {
        y = x;
    }
    else if (x >= 1 && x <= 2) {
        y = pow(x, 2); 
    }
    else if (x > 2 && x <= 10) {
        y = -3.0 / 4.0 * x + 11.0 / 2.0; 
    }
    else if (x > 10) {
        y = -2;
    }
   

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}