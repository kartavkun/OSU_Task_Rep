#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int a;

  std::cout << "Выберите интересующий вид бытовой техники (1-6): ";
  std::cin >> a;

  switch (a) {
    case 1:
      std::cout << "Измерительная бытовая техника" << endl;
      break;
    case 2:
      std::cout << "Вычислительная бытовая техника" << endl;
    case 3:
      std::cout << "Кухонная бытовая техника" << endl;
      break;
    case 4:
      std::cout << "Уборочная бытовая техника" << endl;
      break;
    case 5:
      std::cout << "Техника для ухода за одеждой" << endl;
      break;
    case 6:
      std::cout << "Климатическая и отопительная бытовая техника" << endl;
      break;
    default:
      std::cout << "Увы, но нет у нас такого вида" << endl;
      break;
  }
  return 0;
}
