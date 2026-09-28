# Problem: Sparse Arrays
**HackerRank Link**: [Sparse Arrays](https://www.hackerrank.com/challenges/sparse-arrays/problem)  
**Difficulty**: Easy  
**Topic**: Strings - Frequency

## Problem Statement
There is a collection of strings and a list of query strings. For each query string, determine how many strings in the collection have that exact string.

## Solution (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    vector<string> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i];
    
    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == queries[i]) count++;
        }
        cout << count << endl;
    }
    
    return 0;
}
```

## Complexity Analysis
- **Time Complexity**: O(N × Q) - Comparing each query against all strings
- **Space Complexity**: O(N + Q) - Storing the collection and queries
```