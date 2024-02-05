#include <iostream>

int summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int maximum(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {

    int n;

    std::cout << "Enter the size of the array (n): ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int sumResult = summation(arr, n);
    std::cout << "Sum of the elements: " << sumResult << std::endl;

    int maxResult = maximum(arr, n);
    std::cout << "Maximum element: " << maxResult << std::endl;

    return 0;
}