#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x, y;
  std::cout << "Мне нужен X : ";
  std::cin >> x;

  y = 5/x + (pow(x, 2) - 4);

  std::cout << "Уравнение равно: " << y;
  return 0;
}
