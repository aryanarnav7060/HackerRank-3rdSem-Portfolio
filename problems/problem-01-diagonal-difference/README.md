# Problem: Diagonal Difference
**HackerRank Link**: [Diagonal Difference](https://www.hackerrank.com/challenges/diagonal-difference/problem)  
**Difficulty**: Easy  
**Topic**: Arrays - Matrix

## Problem Statement
Given a square matrix of size N×N, calculate the absolute difference between the sums of its diagonals.

## Solution (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int primaryDiagonal = 0, secondaryDiagonal = 0;
    
    for (int i = 0; i < n; i++) {
        primaryDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][n - 1 - i];
    }
    
    int difference = abs(primaryDiagonal - secondaryDiagonal);
    cout << difference << endl;
    
    return 0;
}
```

## Complexity Analysis
- **Time Complexity**: O(N) - Single pass through matrix diagonals
- **Space Complexity**: O(N²) - Storing the N×N matrix
```