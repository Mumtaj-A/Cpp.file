#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr; // Free allocated memory
    return 0;
}