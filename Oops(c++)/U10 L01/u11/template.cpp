#include <iostream>
using namespace std;
template <typename T, typename U>
void swap(T& a, U& b) {
    T temp = static_cast<T>(b);
    b = static_cast<U>(a);
    a = temp;
}

int main() {
    int num1 = 10;
    double num2 = 5.5;

    cout << "Before swapping: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    swap(num1, num2);

    cout << "After swapping: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}
