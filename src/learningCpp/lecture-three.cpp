#include <iostream>
#include <string>

int findMin( int arr[], int size) {
    int min = arr[0];

    for ( int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int findMax( int arr[], int size) {
    int max = arr[0];

    for ( int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
int main() {
    //q10
    int arrInt[5] = {1,2,3,4,5};

    int arrLength = sizeof(arrInt) / sizeof(arrInt[0]);
    std::cout << "array length" << arrLength << '\n';

    int sum = 0;

    for ( int i = 0; i < arrLength; i++) {
        std::cout << arrInt[i] << '\n';

        sum = sum + arrInt[i];
    }

    std::cout << "Sum of integers in array = " << sum << '\n';

    double average = static_cast<double>(sum) / arrLength;
    std::cout << "Average of integers in array = " << average << '\n';

    //q11
    int largeArray[8] = {7,1,19,23,2,20,-6,17};
    int size = sizeof(largeArray) / sizeof(largeArray[0]);

    std::cout << "Find min function = " << findMin(largeArray, size) << '\n';
    std::cout << "Find max function = " << findMax(largeArray, size) << '\n';

    return 0;
}