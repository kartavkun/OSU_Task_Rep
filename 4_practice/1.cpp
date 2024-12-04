#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int mas[10], max, min;
  srand(time(0));

  for (int i = 0; i < 10; i++) {
    mas[i] = rand()%9+1;

    std::cout << mas[i] << "\t";
  }

  for (int i = 0; i < 5; i++) {
    if (mas[i] < mas[0]) {
      min = mas[i];
    }
  }
  for (int i = 0; i < 5; i++) {
    if (mas[i] > mas[0]) {
      max = mas[i];
    }
  }

  std::cout << endl << min << endl;
  std::cout << max << endl;

  return 0;
  }
