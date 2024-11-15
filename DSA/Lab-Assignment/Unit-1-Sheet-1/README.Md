

# 📊 Data Structures Lab - Sheet 1 ,- Static & Dynamic Arrays, String Operations  
## 🚀 Project Summary
This project is part of the Data Structures & Algorithms (DSA) course and focuses on implementing basic data structures in C++:
1. **Static and Dynamic Arrays**: Understanding the differences in performance and memory allocation.
2. **String Operations**: Implementing functions like concatenation, substring extraction, comparison, and character frequency analysis.
3. **Algorithm Analysis**: Evaluating the efficiency of these implementations using Big O notation and solving recurrence relations for common algorithms.

---

## 📂 Project Structure
- **main.cpp**: Contains the code for static and dynamic arrays, string operations, and character frequency.
- **README.md**: Provides an overview of the project, instructions, and algorithm analysis.
 
---

## ⚙️ How to Run the Program
 
1. Compile the code using a C++ compiler:
   ```
   g++ main.cpp -o main
   ```
2. Run the compiled program:
   ```
   ./main
   ```

---

## 🧪 Test Cases
### Static Array Operations
- **Insert & Delete**:  
  Input: `insert(1), insert(2), delete(1), traverse()`  
  Expected Output: `[2]`

### Dynamic Array Operations
- **Insert & Delete**:  
  Input: `insert(1), insert(2), delete(1), traverse()`  
  Expected Output: `[2]`

### String Operations
- **Concatenate**:  
  Input: `"hello" + "world"`  
  Expected Output: `helloworld`
- **Substring**:  
  Input: Substring of `"hello"` from index `2` with length `3`  
  Expected Output: `llo`
- **Comparison**:  
  Input: Compare `"abc"` and `"abc"`  
  Expected Output: `true`

### Character Frequency
- **Frequency Count**:  
  Input: `"hello"`  
  Expected Output:  
  ```
  h: 1
  e: 1
  l: 2
  o: 1
  ```

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

### Recurrence Relations Analysis
- **Binary Search**:  
  \( T(n) = T(n/2) + O(1) \Rightarrow O(\log n) \)
  
- **Merge Sort**:  
  \( T(n) = 2T(n/2) + O(n) \Rightarrow O(n \log n) \)

---

## 📋 Evaluation Rubric
| Criteria            | Excellent (4) | Good (3) | Satisfactory (2) | Needs Improvement (1) |
|---------------------|---------------|----------|-------------------|-----------------------|
| Implementation      | Correct       | Mostly correct | Partially correct | Incorrect             |
| Code Quality        | Well-commented | Some comments | Few comments | Poorly commented      |
| Analysis            | Thorough     | Mostly accurate | Some inaccuracies | Inaccurate           |
| Submission          | On time      | Slightly late | Late            | Not submitted         |

---

## 📜 License
This project is for educational purposes and is open-source. Feel free to use, modify, and distribute it as needed.

## ✍️ Author
This lab assignment was completed by  **Harshit Jaiswal (2301010397)**   under the guidance of **Ms. Suman** for the **B.Tech Computer Science Engineering** program.

---
 : )
