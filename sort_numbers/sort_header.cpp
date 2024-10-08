#include "sort.hpp"
#include <iostream>
using namespace std;
int main() {
    const int size = 5; // Example size
    int arr[size];

    // Input the array elements
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort_numbers(arr, size);

    // Display the sorted array
    cout << "Sorted array: ";
    display_array(arr ,size);

    return 0;
}
