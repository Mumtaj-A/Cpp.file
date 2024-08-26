#include <iostream>

int sumOfArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int sum = sumOfArray(arr, n);
    std::cout << "Sum of elements in the array: " << sum << std::endl;

    delete[] arr; // Free allocated memory
    return 0;
}