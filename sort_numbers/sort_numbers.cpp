#include <iostream>
#include "sort.hpp"
using namespace std;

// Function to swap two integers
void swap_fun(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to sort an array of integers using bubble sort
void sort_numbers(int arr[], int size) {
    // Bubble Sort algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap_fun(arr[j], arr[j + 1]); // Swap if the element is greater than the next
            }
        }
    }
}

// Function to display the array
void display_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

