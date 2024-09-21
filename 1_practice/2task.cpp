#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main (){
  double r, h, s, v, l;
  
  std::cout << "Мне нужен радиус конуса: ";
  std::cin >> r;
  std::cout << "Мне нужна высота конуса: ";
  std::cin >> h;

  v = 1.0 / 3 * M_PI * pow(r, 2) * h;
  
  l = sqrt(pow(r, 2) + pow(h, 2));
  s = M_PI * pow(r, 2) + M_PI * r * l;

  std::cout << "Объём конуса равен: " << v << endl;
  std::cout << "Площадь конуса равна: " << s << endl;

  return 0;
}
