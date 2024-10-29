#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double x1 = 1, x2 = 6; 
    double y1 = 2, y2 = 4;

    cout << "   X    |    Y    |    Result" << endl;
    cout << "-----------------------------" << endl;

    for (double x = x1; x <= x2; x++) {
        for (double y = y1; y <= y2; y++) {
            double result = 4 * cos(x * y) + 1 / (5 * x - 2 * y);
            cout << fixed << x << " | " << y << " | " << result << endl;
        }
    }

    return 0;
}
