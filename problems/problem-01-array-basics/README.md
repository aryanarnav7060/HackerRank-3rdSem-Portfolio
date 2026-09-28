# Problem: Array Basics
**HackerRank Link**: [Array Introduction](https://www.hackerrank.com/challenges/array-introduction/problem)  
**Difficulty**: Easy  
**Topic**: Linear Data Structures - Arrays

## Problem Statement
Given an array of integers, perform the following operations:
1. Print the array elements separated by a space
2. Print the reverse of the array
3. Print the sum of all elements

## Solution (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print array elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Print reverse
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
    
    return 0;
}
```

## Complexity Analysis
- **Time Complexity**: O(N) - Single pass to read, reverse, and sum
- **Space Complexity**: O(N) - Storing the array of N elements
```