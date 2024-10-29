#include <iostream>

using namespace std;

int main() {
    double firstday = 10, total = 0;

    for (int day = 0; day <= 7; day++)
    {
        total += firstday;
        firstday *= 1.1;
    }
    
    cout << "Растояние, пройденное за 7 дней = " << total << "км" << endl;
    
    return 0;
}