#include <iostream>
#include <cmath>

//метод трапеции
double f(double x) {
    return sqrt(4 + x * x);
}

double integrate(double a, double b, double epsilon) {
    double h = b - a; // Исходная ширина интервала
    double result = 0.5 * (f(a) + f(b)); // Первое приближение
    int n = 1; // Начальное количество разбиений

    do {
        double sum = 0.0;
        for (int i = 1; i <= n; ++i) {
            double x = a + i * h / n;
            sum += f(x);
        }
        result = 0.5 * result + (h / n) * sum;
        n *= 2;
        h /= 2;
    } while (std::fabs(result - 0.5 * (result + (h / n) * f(b))) >= epsilon);

    return result;
}

int main() {
    double a = 0.0; // Начало интервала
    double b = 3.0; // Конец интервала
    double epsilon = 1e-5; // Точность

    double integral = integrate(a, b, epsilon);
    std::cout << "Значение интеграла: " << integral << std::endl;

    return 0;
}
