# Problem: Time Conversion
**HackerRank Link**: [Time Conversion](https://www.hackerrank.com/challenges/time-conversion/problem)  
**Difficulty**: Easy  
**Topic**: Strings - Time Format

## Problem Statement
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

## Solution (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int hour = stoi(s.substr(0, 2));
    string meridiem = s.substr(s.length() - 2);
    
    if (meridiem == "AM") {
        if (hour == 12) hour = 0;
    } else {
        if (hour != 12) hour += 12;
    }
    
    cout << setw(2) << setfill('0') << hour << s.substr(2, 6) << endl;
    
    return 0;
}
```

## Complexity Analysis
- **Time Complexity**: O(1) - Simple string manipulation
- **Space Complexity**: O(1) - No extra space required
```