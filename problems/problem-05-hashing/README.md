# Problem: Hash Table Implementation
**HackerRank Link**: [Counting Sort 1](https://www.hackerrank.com/challenges/counting-sort-1/problem)  
**Difficulty**: Easy  
**Topic**: Hashing - Hash Tables

## Problem Statement
Implement a counting sort algorithm to count the frequency of each element in an array.

## Solution (Python)
```python
def counting_sort(arr):
    if not arr:
        return []
    
    # Find the range of values
    min_val = min(arr)
    max_val = max(arr)
    
    # Create count array
    range_val = max_val - min_val + 1
    count = [0] * range_val
    
    # Count each element
    for num in arr:
        count[num - min_val] += 1
    
    # Reconstruct sorted array
    sorted_arr = []
    for i, c in enumerate(count):
        sorted_arr.extend([i + min_val] * c)
    
    return sorted_arr

# Example usage
arr = [1, 4, 1, 2, 7, 5, 2]
sorted_arr = counting_sort(arr)
print(sorted_arr)  # Output: [1, 1, 2, 2, 4, 5, 7]
```

## Complexity Analysis
- **Time Complexity**: O(n + k) where n is number of elements and k is range of values
- **Space Complexity**: O(k) - Count array of size k
- **Best for**: Small integer range, stable sorting
```