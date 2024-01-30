/*Write a program in C++ to sort the numbers in an array using separate functions for read, 
display, sort and swap. The objective of this assignment is to learn the concepts of input, 
output, functions, call by reference in C++*/

#include <iostream>
using namespace std;

// Function prototypes
void readArray(int arr[], int size);
void displayArray(const int arr[], int size);
void sortArray(int arr[], int size);
void swap(int& a, int& b);

int main() {
    const int maxSize = 100; // Maximum size of the array
    int numbers[maxSize];
    int size;

    // Read the array
    cout << "Enter the size of the array: ";
    cin >> size;
    readArray(numbers, size);

    // Display the original array
    cout << "\nOriginal array: ";
    displayArray(numbers, size);

    // Sort the array
    sortArray(numbers, size);

    // Display the sorted array
    cout << "\nSorted array: ";
    displayArray(numbers, size);

    return 0;
}

// Function to read values into an array
void readArray(int arr[], int size) {
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to display elements of an array
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to perform bubble sort on an array
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to swap two integers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
