#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, min, max;

    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Введите число z: ";
    cin >> z;

    if (x <= y && x <= z) {
        min = x;
    } else if (y <= x && y <= z) {
        min = y;
    } else {
        min = z;
    }

    if (x >= y && x >= z) {
        max = x;
    } else if (y >= x && y >= z) {
        max = y;
    } else {
        max = z;
    }

    cout << "Минимальное значение: " << min << endl;
    cout << "Максимальное значение: " << max << endl;

    return 0;
}
