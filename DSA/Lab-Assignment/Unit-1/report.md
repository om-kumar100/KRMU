
# Algorithm Analysis Report

## Time Complexity
- **Static Array**:
  - Insertion: O(1)
  - Deletion: O(n)
  - Traversal: O(n)

- **Dynamic Array**:
  - Insertion (with resizing): O(n), amortized O(1)
  - Deletion: O(n)
  - Traversal: O(n)

- **String Operations**:
  - Concatenation: O(m + n)
  - Substring: O(k)
  - Comparison: O(min(m, n))
  - Character Frequency: O(n)

## Recurrence Relations
- **Binary Search**: T(n) = T(n/2) + O(1) -> O(log n)
- **Merge Sort**: T(n) = 2T(n/2) + O(n) -> O(n log n)
