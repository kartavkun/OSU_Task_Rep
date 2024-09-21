#include <iostream>
#include <cmath>

using namespace std;

double calculateExpression(double x, double a, double b) {
    // Вычисляем значение выражения
    double cos_x = cos(x);
    double sin_ax = sin(a * x);
    double cos_ax = cos(a * x);

    // Проверяем, что выражения под корнями и логарифмами не приводят к ошибкам
    if (fabs(cos_x) < 1e-10) {
        cout << "Ошибка: cos(x) не должен быть равен 0 для вычисления корня." << endl;
        return NAN; // Возвращаем NaN в случае ошибки
    }

    double ln_value = log(fabs(x + a * b));
    if (ln_value < 0) {
        cout << "Ошибка: логарифм не может быть вычислен для отрицательного значения." << endl;
        return NAN; // Возвращаем NaN в случае ошибки
    }

    double denominator = 2 * sqrt(fabs(cos_x)) + sqrt(ln_value);
    if (denominator == 0) {
        cout << "Ошибка: деление на ноль." << endl;
        return NAN; // Возвращаем NaN в случае ошибки
    }

    double arctan_value = atan((1 - 3 * sqrt(cos_ax * cos_ax)) / (4 + 3 * sqrt(sin_ax * sin_ax)));

    return (1.0 / denominator) * arctan_value;
}

int main() {
    double x, a, b;

    // Ввод значений x, a и b
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;

    double result = calculateExpression(x, a, b);

    if (!isnan(result)) {
        cout << "Результат выражения: " << result << endl;
    }

    return 0;
}

