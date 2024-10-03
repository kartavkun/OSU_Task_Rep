#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char *argv[]) {
  double x, y, a;

  std::cout << "Введите x: ";
  std::cin >> x;

  std::cout << "Введите a: ";
  std::cin >> a;
  
  if (x <= -10) {
    y = fabs(x) * (3 * pow(a, 2) + 2);
  }
  else if (-10 < x && x <= 10) {
    y = 2 * pow(x, 2) + 4 * a;
  }
  else {
    y = 5 * pow(x, 2) + 10 * a * x + 5 * a;
  }

  std::cout << "y = " << y << endl;
  return 0;
}
