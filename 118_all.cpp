#include <iostream>
//a
int main() {
    double result = 0.0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 1) {
            result += 1.0 / i;
        } else {
            result -= 1.0 / i;
        }
    }

    std::cout << "Сумма (последовательно слева направо): " << result << std::endl;
    
    return 0;
}


//b
#include <iostream>

int main() {
    double sum1 = 0.0;
    double sum2 = 1+(1/3)+ (1/999);

    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 1) {
            sum1 += 1.0 / i;
        }
        
    }

    double result = sum2 - sum1;

    std::cout << "Сумма (последовательно слева направо с вычитанием): " << result << std::endl;
    
    return 0;
}



//c
#include <iostream>

int main() {
    double result = 0.0;
    for (int i = 1000; i >= 1; i--) {
        if (i % 2 == 1) {
            result += 1.0 / i;
        } else {
            result -= 1.0 / i;
        }
    }

    std::cout << "Сумма (последовательно справа налево): " << result << std::endl;
    
    return 0;
}



//d
#include <iostream>

int main() {
    double sum1 = 0.0;
    double sum2 = 1+(1/3)+ (1/999);

    for (int i = 1000; i >= 2; i--) {
        if (i % 2 == 1) {
            sum1 += 1.0 / i;
        }
        
    }

    double result = sum2 - sum1;

    std::cout << "Сумма (последовательно справа налево с вычитанием): " << result << std::endl;
    
    return 0;
}
