#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print reverse
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;

    return 0;
}