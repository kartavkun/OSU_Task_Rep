#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for(float i = 1; i <= 5; i += 0.5) {
        cout << "f("<< i << ") = " << log(i) + 1 << endl; 
    }
    return 0;
}