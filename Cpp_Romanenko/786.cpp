#include <iostream>

using namespace std;

int main() {
    int n, m; // Количество растений с желтыми и зелеными семядолями в потомстве F1

    cout << "Введите количество растений с желтыми семядолями (n): ";
    cin >> n;

    cout << "Введите количество растений с зелеными семядолями (m): ";
    cin >> m;

    if (n > 0 && m == 0) {
        cout << "Генотипы родителей могут быть RR и rr." << endl;
    } else if (n == 0 && m > 0) {
        cout << "Генотипы родителей могут быть rr и rr." << endl;
    } else if (n > 0 && m > 0) {
        cout << "Генотипы родителей могут быть Rr и Rr." << endl;
    } else {
        cout << "Генотипы родителей могут быть любыми." << endl;
    }

    return 0;
}
