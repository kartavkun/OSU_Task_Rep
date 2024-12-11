// 17 вариант

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int n, k;

    cout << "Введите количество строк и столбцов: ";
    cin >> n;

    cout << "Введите строку (от 0 до " << n - 1 << "): ";
    cin >> k;

    int mas[n][n];
    srand(time(0));

    int sum_diag = 0;
    int sum_row = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mas[i][j] = rand() % 21 - 10;
            cout << mas[i][j] << "\t";

            if (i == j) {
                sum_diag += mas[i][j];
            }
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++) {
        sum_row += mas[k][j];
    }

    int product = sum_diag * sum_row;

    cout << "Сумма элементов главной диагонали: " << sum_diag << endl;
    cout << "Сумма элементов " << k << "-й строки: " << sum_row << endl;
    cout << "Произведение суммы главной диагонали и суммы " << k << "-й строки: " << product << endl;

    return 0;
}
