#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for(int i=0; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void printArray(const vector<int> &arr){
    for(int num: arr) cout << num << " ";
    cout << endl;
}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original: ";
    printArray(arr);

    bubbleSort(arr);
    cout << "Bubble Sorted: ";
    printArray(arr);

    return 0;
}

