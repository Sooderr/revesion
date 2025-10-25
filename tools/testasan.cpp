#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];

    // Ошибка №1 — выход за границы массива
    for (int i = 0; i <= 5; i++) {
        arr[i] = i * 10;
    }

    // Ошибка №2 — утечка памяти (нет delete)
    // delete[] arr;

    cout << "ASan test done" << endl;
    return 0;
}
