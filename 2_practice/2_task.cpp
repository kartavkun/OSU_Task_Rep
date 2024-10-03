#include <iostream>
#include <cmath>
#include <algorithm> // Для std::min и std::max

using namespace std;

int main() {
    double x, y, z, minxyz, maxxyz;

    std::cout << "Введите число x: ";
    std::cin >> x;
    std::cout << "Введите число y: ";
    std::cin >> y;
    std::cout << "Введите число z: ";
    std::cin >> z;

    minxyz = std::min({x, y, z});
    maxxyz = std::max({x, y, z});

    std::cout << "Минимальное значение: " << minxyz << std::endl;
    std::cout << "Максимальное значение: " << maxxyz << std::endl;

    return 0;
}

