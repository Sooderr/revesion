#include <iostream>
using namespace std;

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int multiply(int x, int y) {
    int result = x * y;
    return result;
}


int main() {
    int a = 5;
    int b = 3;

    cout << "a = " << a << ", b = " << b << endl;

    int sum = add(a, b);
    cout << "Сумма: " << sum << endl;

    int product = multiply(a, b);
    cout << "Произведение: " << product << endl;

    cout << "Программа завершена." << endl;
    return 0;
}
