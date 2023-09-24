#include <iostream>
#include <vector>

// Функция для вычисления производной многочлена
std::vector<double> derivative(const std::vector<double>& coefficients) {
    int n = coefficients.size() - 1;
    std::vector<double> result(n, 0.0);
    for (int i = 1; i <= n; i++) {
        result[i - 1] = i * coefficients[i];
    }
    return result;
}

int main() {
    int n; // Степень многочлена P(x)
    double s; // Коэффициент s
    std::vector<double> P_coefficients;

    // Ввод степени многочлена и коэффициента s
    std::cout << "Введите степень многочлена n: ";
    std::cin >> n;
    std::cout << "Введите коэффициент s: ";
    std::cin >> s;

    // Ввод коэффициентов многочлена P(x)
    std::cout << "Введите коэффициенты многочлена P(x) (начиная с коэффициента x^0 и заканчивая x^n): ";
    for (int i = 0; i <= n; i++) {
        double coefficient;
        std::cin >> coefficient;
        P_coefficients.push_back(coefficient);
    }

    // Умножение на (s * x^2)
    for (int i = 0; i <= n; i++) {
        P_coefficients[i] *= s;
    }

    // Вычисление производной многочлена P(x)
    std::vector<double> P_prime_coefficients = derivative(P_coefficients);

    // Вывод результата
    std::cout << "Результат: (s * x^2)P(x) + P'(x) = ";
    for (int i = 0; i <= n; i++) {
        std::cout << P_coefficients[i] << "x^" << i;
        if (i < n) {
            std::cout << " + ";
        }
    }
    std::cout << " + ";
    for (int i = 0; i < n; i++) {
        std::cout << P_prime_coefficients[i] << "x^" << i;
        if (i < n - 1) {
            std::cout << " + ";
        }
    }
    std::cout << std::endl;

    return 0;
}