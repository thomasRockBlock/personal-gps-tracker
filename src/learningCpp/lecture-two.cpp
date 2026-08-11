#include <iostream>
#include <string>

int sumTwoNumbers ( int num1, int num2) {
    return num1 + num2;
}

bool isEven ( int num) {
    return (num % 2 == 0);
}

int factorial( int n) {
    int val = 1;

    for ( int i = 1;  i <= n; i++ ) {
        val = val * i;
    }

    return val;
}

void printFactorial (int n) {
    std::cout << n << "! = " << factorial(n) << '\n';
}

int main() {
    //q7
    std::cout << "Sum function returns : " << sumTwoNumbers(3,7) << '\n';

    //q8
    std::string isEvenResult;

    if (isEven(5)){
        isEvenResult = "True";
    }
    else {
        isEvenResult = "False";
    }

    std::cout << "Is Even returns : " << isEvenResult << '\n';

    //q9
    printFactorial(0);

    return 0;
}