#include <iostream>
#include <string>

void swap( int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 = 6, num2 = 7;

    std::cout << "before swapping num1 and num2 - here is num1 - " << num1 << " here is num2 - " << num2 << '\n';
    swap(num1, num2);
    std::cout << "after swapping num1 and num2 - here is num1 - " << num1 << " here is num2 - " << num2 << '\n';

    return 0;
}