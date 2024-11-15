# 📊 Data Structures Lab Sheet- 3, - Static & Dynamic Arrays, String Operations By **Harshit Jaiswal (2301010397)** 
## 📋 Course Information
- **School of Engineering & Technology**
- **Department**: SOET  
- **Session**: 2024-2025  
- **Program**: B.Tech Computer Science Engineering  
- **Course Code**: ENCS253  
- **Course Name**: Data Structure (C++)  
- **Faculty**: Ms. Suman  

---

## 🚀 Project Summary
This lab assignment focuses on implementing and analyzing basic data structures using C++. It covers:
1. **Static and Dynamic Arrays**: Implementing operations such as insertion, deletion, and traversal.
2. **String Operations**: Implementing functions like concatenation, substring extraction, comparison, and character frequency analysis.
3. **Algorithm Analysis**: Evaluating the efficiency of implementations using Big O notation.

---

## 📚 Objectives
- Understand fundamental data structures.
- Implement static and dynamic arrays and compare their performance.
- Implement various string operations.
- Analyze time and space complexities using asymptotic notations.

---

## 💻 Problem Description
### 1. Static and Dynamic Arrays:
- **Static Array**: Implement and perform insertion, deletion, and traversal.
- **Dynamic Array**: Implement similar operations and analyze differences with static arrays.

### 2. String Operations:
- Implement operations like:
  - Concatenation
  - Substring extraction
  - String comparison
  - Character frequency counting

### 3. Algorithm Analysis:
- Analyze the time and space complexities for the implemented data structures.

---

## ⚙️ Instructions
- Implement a class `StaticArray` for static array operations.
- Implement a class `DynamicArray` for dynamic array operations.
- Implement a class `StringOperations` with methods for various string operations.
- Include test cases to validate your implementation.

---

## 🧪 Test Cases
| Test Case               | Input                                      | Expected Output                                      |
|-------------------------|--------------------------------------------|------------------------------------------------------|
| Static Array Operations | `insert(1), insert(2), delete(1), traverse()` | `[2]`                                                |
| Dynamic Array Operations| `insert(1), insert(2), delete(1), traverse()` | `[2]`                                                |
| String Concatenation    | `"hello" + "world"`                        | `"helloworld"`                                       |
| Substring Extraction    | Substring of `"hello"` from index `2`, length `3` | `"llo"`                                             |
| String Comparison       | `"abc"` and `"abc"`                        | `True`                                               |
| Character Frequency     | `"hello"`                                  | `{'h': 1, 'e': 1, 'l': 2, 'o': 1}`                   |

---

## 📈 Algorithm Analysis
### Time Complexity Analysis
- **Static Array**:
  - Insertion: \( O(1) \)
  - Deletion: \( O(n) \)
  - Traversal: \( O(n) \)

- **Dynamic Array**:
  - Insertion (with resizing): \( O(n) \), amortized \( O(1) \)
  - Deletion: \( O(n) \)
  - Traversal: \( O(n) \)

- **String Operations**:
  - Concatenation: \( O(m + n) \)
  - Substring: \( O(k) \)
  - Comparison: \( O(\min(m, n)) \)
  - Character Frequency: \( O(n) \)

---

## ✍️ Author
**Harshit Jaiswal (2301010397)**
