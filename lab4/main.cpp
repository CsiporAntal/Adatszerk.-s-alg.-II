#include <iostream>
#include "C:\Users\tonic\OneDrive\Documents\adatszerk\lab4\cmake-build-debug\DivideatImperia.h"

int main() {

    int arr1[] = {4, 2, 9, 5, 1, 8, 3};
    int arr2[] = {5, 19, 50, 13, 38, 39, 45, 23, 11, 465};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int max_value = max(arr1, 0, n1);

    std::cout << max_value << std::endl;
    std::cout << sum(arr1, 0, 6) << std::endl;

    int arr[] = {1, 3, 5, 7, 9}; // rendezett
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int result = binary_search(arr, 0, n - 1, x);
    if (result == -1) {
        std::cout << "Az elem nem talahato a tombben" << std::endl;
    } else {
        std::cout << "Az elem indexe: " << result << std::endl;
    }
    hanoi(3, 'A', 'C', 'B');

    merge(arr, 0, n / 2 - 1, n - 1);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    mergeSort(arr2, 0, n2 - 1);
    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i] << " ";
    }
    //visszafele
    std::cout<<std::endl;
    mergeSort(arr2, 0, n2 - 1);
    for (int i = n2-1; i >= 0; i--) {
        std::cout << arr2[i] << " ";
    }

    return 0;
}
