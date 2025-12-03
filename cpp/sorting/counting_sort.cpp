#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> countingSort(const vector<int> &arr){
    if(arr.empty()) return {};
    int max_val = *max_element(arr.begin(), arr.end());
    vector<int> count(max_val+1, 0);
    for(int num: arr) count[num]++;
    vector<int> sorted;
    for(int i=0; i<=max_val; i++){
        for(int j=0; j<count[i]; j++)
            sorted.push_back(i);
    }
    return sorted;
}

void printArray(const vector<int> &arr){
    for(int num: arr) cout << num << " ";
    cout << endl;
}

int main(){
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    cout << "Original: ";
    printArray(arr);

    vector<int> sorted = countingSort(arr);
    cout << "Counting Sorted: ";
    printArray(sorted);

    return 0;
}

