#include <iostream>

using namespace std;

int main() {
    int n, m = 2;
    double prod, sum = 0;

    cout << "Введите n (n >= 2): ";
    cin >> n;

    if (n < 2)
    {
        cout << "n должно быть больше 2";
        return 1;
    }
    
    while (m <= n)
    {
        prod = (m * m - m) - (m / 2 * m + 1);
        sum += prod;
        m++;
    }

    cout << sum << endl;

    return 0;
    
}