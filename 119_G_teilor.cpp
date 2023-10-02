#include <iostream>
#include <cmath>

int main() {
    double epsilon;
    std::cout << "Введите точность (ε): ";
    std::cin >> epsilon;

    double sum = 1.0; // Первое слагаемое
    double term = 1.0; // Текущее слагаемое
    int i = 1;

    while (std::abs(term) >= epsilon) {
        term *= (-2.0) / i; // Вычисляем следующее слагаемое
        sum += term; // Добавляем его к сумме
        i++;
    }

    std::cout << "Сумма с точностью ε = " << epsilon << " равна: " << sum << std::endl;

    return 0;
}
