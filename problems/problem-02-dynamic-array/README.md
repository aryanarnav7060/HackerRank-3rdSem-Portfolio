# Problem: Dynamic Array
**HackerRank Link**: [Dynamic Array](https://www.hackerrank.com/challenges/dynamic-array/problem)  
**Difficulty**: Easy  
**Topic**: Arrays - Queries

## Problem Statement
There are n empty sequences, indexed from 0 to n-1. The sequences are categorized as 0-indexed arrays. Perform q queries on the last sequence. Each query is of the form 2 x y - where sequence idx = (x % n), and arr[idx].push_back(y). Then output arr[idx][y_size - 1].

## Solution (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> seq(n);
    int lastAnswer = 0;
    
    while (q--) {
        int queryType, x, y;
        cin >> queryType >> x >> y;
        
        int idx = (x ^ lastAnswer) % n;
        
        if (queryType == 1) {
            seq[idx].push_back(y);
        } else {
            lastAnswer = seq[idx][y % seq[idx].size()];
            cout << lastAnswer << endl;
        }
    }
    
    return 0;
}
```

## Complexity Analysis
- **Time Complexity**: O(Q) - Processing each query in constant time
- **Space Complexity**: O(N + Q) - Storing all sequences and query results
```