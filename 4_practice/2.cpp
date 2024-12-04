#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int mas[10], sum;
  long long prod = 1;
  srand(time(0));

  for (int i = 0; i < 10; i++) {
    mas[i] = rand() % 9 + 1;

    int prodmas = mas[i] * 5;

    std::cout << prodmas << "\t";

    sum += prodmas;
    prod *= prodmas;
  }

  std::cout << endl << "Sum = " << sum << endl;
  std::cout << "Prod = " << prod << endl;

  return 0;
}
