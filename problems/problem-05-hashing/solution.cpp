#include <iostream>
#include <vector>
#include <algorithm>
using namespace counting sort implementation

// Counting Sort
void countingSort(vector<int>& arr) {
    if (arr.empty()) return;
    
    // Find minimum and maximum values
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;
    
    // Create count array
    vector<int> count(range, 0);
    
    // Store count of each element
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i] - minVal]++;
    }
    
    // Modify count array to store actual positions
    for (int i = 1; i < count.size(); i++) {
        count[i] += count[i - 1];
    }
    
    // Build output array
    vector<int> output(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - minVal] - 1] = arr[i];
        count[arr[i] - minVal]--;
    }
    
    // Copy output to original array
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = output[i];
    }
}

int main() {
    vector<int> arr = {1, 4, 1, 2, 7, 5, 2};
    
    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Perform counting sort
    countingSort(arr);
    
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}