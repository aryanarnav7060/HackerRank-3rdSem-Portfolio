# Problem: Compare the Triplets
**HackerRank Link**: [Compare the Triplets](https://www.hackerrank.com/challenges/compare-the-triplets/problem)  
**Difficulty**: Easy  
**Topic**: Arrays - Comparison

## Problem Statement
Alice and Bob each created problems for HackerRank. Rate them on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty. The comparison points are:
- If a[i] > b[i], Alice gets 1 point
- If a[i] < b[i], Bob gets 1 point
- If a[i] = b[i], neither gets a point

Calculate their total scores and return them as an array.

## Solution (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3), b(3);
    
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];
    
    int aliceScore = 0, bobScore = 0;
    
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) aliceScore++;
        else if (a[i] < b[i]) bobScore++;
    }
    
    cout << aliceScore << " " << bobScore << endl;
    
    return 0;
}
```

## Complexity Analysis
- **Time Complexity**: O(1) - Fixed 3 iterations
- **Space Complexity**: O(1) - Only storing scores
```