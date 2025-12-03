#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSortForRadix(vector<int> &arr, int exp){
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    for(int i=0; i<n; i++)
        count[(arr[i]/exp)%10]++;

    for(int i=1; i<10; i++)
        count[i] += count[i-1];

    for(int i=n-1; i>=0; i--){
        int index = (arr[i]/exp)%10;
        output[count[index]-1] = arr[i];
        count[index]--;
    }

    for(int i=0; i<n; i++)
        arr[i] = output[i];
}

void radixSort(vector<int> &arr){
    if(arr.empty()) return;
    int max_val = *max_element(arr.begin(), arr.end());
    for(int exp=1; max_val/exp>0; exp*=10)
        countingSortForRadix(arr, exp);
}

void printArray(const vector<int> &arr){
    for(int num: arr) cout << num << " ";
    cout << endl;
}

int main(){
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    cout << "Original: ";
    printArray(arr);

    radixSort(arr);
    cout << "Radix Sorted: ";
    printArray(arr);

    return 0;
}

