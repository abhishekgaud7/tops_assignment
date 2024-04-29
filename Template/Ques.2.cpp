// Write a program of to sort the array using templates.
#include <iostream>
using namespace std;
template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
int partition(T arr[], int low, int high) {
    T pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

template <typename T>
void quicksort(T arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << std::endl;
}
main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    quicksort(arr, 0, n - 1);
    cout << "Sorted array: ";
    printArray(arr, n);
}

