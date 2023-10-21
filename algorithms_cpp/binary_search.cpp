#include <iostream>
#include <vector>

int binary_search(std::vector<int> &array, int item) {
    int left = 0;
    int right = array.size();

    while (right > left) {
        int middle = left + (right - left) / 2;
        int thk = array[middle];

        if (thk == item) {
            return middle;
        } else {
            if (thk < item) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }
    }

    return -1; 
}

int main() {
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
    numbers.push_back(10);
    int i = 7;

    int result = binary_search(numbers, i);
    std::cout << result << std::endl;

    return 0;
}

