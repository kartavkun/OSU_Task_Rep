#include <iostream>
#include <climits>

using namespace std;

int main (int argc, char *argv[]) {
  int mas[10];
  srand(time(0));

  for (int i = 0; i < 10; i++) {
    mas[i] = rand()%9+1;

    std::cout << mas[i] << "\t";
  }

  int min = INT_MAX;  
  int max = INT_MIN;

  for (int i = 0; i < 5; i++) {
      if (mas[i] < min) {
          min = mas[i];
      }
  }

  for (int i = 0; i < 10; i++) {
      if (mas[i] > max) {
          max = mas[i];
      }
  }

  // Вывод результатов
  std::cout << endl << "Минимальный элемент: " << min << endl;
  std::cout << "Максимальный элемент: " << max << endl;

  return 0;
}
