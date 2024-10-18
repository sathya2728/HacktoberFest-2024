//modified this code
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2; // Updated mid calculation

        if (arr[mid] == key) {
            return mid; // Key found
        }
        if (key > arr[mid]) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    
    return -1; // Key not found
}

int main() {
    int size;
    cout << "Enter the size of the sorted array: ";
    cin >> size;

    int* arr = new int[size]; // Dynamically allocate array

    cout << "Enter " << size << " sorted elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search for: ";
    cin >> key;

    int index = binarySearch(arr, size, key);

    if (index != -1) {
        cout << "Index of the key in the array is: " << index << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    delete[] arr; // Clean up dynamically allocated memory
    return 0;
}
