#include <iostream>
#include <vector>

int main() {
    int N;
    std::cout << "Введите размерность матрицы N: ";
    std::cin >> N;

    // Создаем матрицу и заполняем её вещественными числами
    std::vector<std::vector<double>> matrix(N, std::vector<double>(N));
    std::cout << "Введите элементы матрицы:" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> matrix[i][j];
        }
    }

    double sum = 0.0;

    // Проходим по диагональным квадратам
    for (int d = 0; d < N - 1; d++) {
        double product = 1.0;
        for (int i = 0; i < N - d; i++) {
            product *= matrix[i][i + d];
        }
        sum += product;
    }

    // Выводим сумму произведений элементов диагональных квадратов
    std::cout << "Сумма произведений элементов диагональных квадратов: " << sum << std::endl;

    return 0;
}

#include <iostream>
#include <vector>

void find_Isomorphic(std::vector<int>& numbers, int N) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] != -1) {
            int remainder = numbers[i] % N;
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[j] != -1 && numbers[j] % N == remainder) {
                    numbers[j] = -1;
                }
            }
        }
    }
}

int main() {
    int N;
    std::cout << "Введите N: ";
    std::cin >> N;

    int numElements;
    std::cout << "Введите количество элементов в векторе: ";
    std::cin >> numElements;

    std::vector<int> numbers(numElements);

    std::cout << "Введите элементы вектора: ";
    for (int i = 0; i < numElements; i++) {
        std::cin >> numbers[i];
    }

    find_Isomorphic(numbers, N);

    std::cout << "Результат после удаления изоморфных элементов:" << std::endl;
    for (int num : numbers) {
        if (num != -1) {
            std::cout << num << " ";
        }
    }

    return 0;
}

