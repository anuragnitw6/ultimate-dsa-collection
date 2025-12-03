#include <iostream>
#include <vector>
using namespace std;

// Partition function
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high]; // choose last element as pivot
    int i = low - 1;       // index of smaller element

    for(int j = low; j < high; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort recursive function
void quickSort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high); // partition index

        // Recursively sort left and right subarrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print array
void printArray(const vector<int> &arr) {
    for(int num : arr) cout << num << " ";
    cout << endl;
}

// Main function
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    cout << "Original Array: ";
    printArray(arr);

    quickSort(arr, 0, arr.size() - 1);

    cout << "Quick Sorted Array: ";
    printArray(arr);

    return 0;
}

