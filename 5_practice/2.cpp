#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, k;

    cout << "Введите размер массива N (больше 8): ";
    cin >> n;

    if (n < 8) {
      std::cout << "СТРОГО БОЛЬШЕ 8!!!" << endl;
      return 1;
    }

    cout << "Введите элемент, с которого будет начинаться новый массив (от 0 до " << n - 8 << "): ";
    cin >> k;

    if (k < 0 || k > n - 8) {
        cout << "Некорректное значение k." << endl;
        return 1;
    }

    int mas[n];
    srand(time(0));

    for (int i = 0; i < n; i++) {
      mas[i] = rand() % 9 + 1;

      std::cout << mas[i] << "\t";
    }
    std::cout << endl;

    int masNew[8];
    for (int i = 0; i < 8; i++) {
        masNew[i] = mas[k + i];
        
        std::cout << masNew[i] << "\t";
    }
    std::cout << endl;

    double maxElem = INT_MIN;
    double minElem = INT_MAX;

    for (int i = 0; i < 8; i++) {
        if (masNew[i] > maxElem) {
          maxElem = masNew[i];
        }
        if (masNew[i] < minElem) {
          minElem = masNew[i];
        }
    }

    double average = (minElem + maxElem) / 2.0;

    cout << "Максимальный элемент нового массива: " << maxElem << endl;
    cout << "Минимальный элемент нового массива: " << minElem << endl;
    cout << "Среднее арифметическое максимального и минимального элементов: " << average << endl;

    return 0;
}
