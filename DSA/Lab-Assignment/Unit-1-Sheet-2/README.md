


# 📊 Data Structures Lab Sheet- 2,  - Static & Dynamic Arrays, String Operations By   
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
1. **Static and Dynamic Arrays**: Understanding their differences in performance and memory usage.
2. **String Operations**: Implementing functions like concatenation, substring extraction, comparison, and character frequency analysis.
3. **Algorithm Analysis**: Evaluating the efficiency of implementations using Big O notation and solving recurrence relations for algorithms like binary search and merge sort.

---

## 📚 Objectives
- Understand fundamental data structures and their classification.
- Implement static and dynamic arrays with operations like insertion, deletion, and traversal.
- Implement string operations and character frequency counting.
- Analyze time and space complexities using asymptotic notations.
- Solve recurrence relations for algorithms.

---

## 💻 Problem Description
### 1. Static and Dynamic Arrays:
- **Static Array**: Implement insertion, deletion, and traversal.
- **Dynamic Array**: Implement similar operations and compare performance with static arrays.

### 2. String Operations:
- Implement basic string operations such as concatenation, substring extraction, and comparison.
- Implement a function to count the frequency of each character in a given string.

### 3. Algorithm Analysis:
- Analyze time and space complexities using Big O notation.
- Solve recurrence relations for algorithms like binary search and merge sort.

---

## 📂 Project Structure
- **main.cpp**: Implementation of static & dynamic arrays, string operations, and character frequency.
- **README.md**: Project documentation, instructions, and algorithm analysis.
  
---

## ⚙️ Instructions
### Static and Dynamic Array Implementation:
- Create a class `StaticArray` with methods for insertion, deletion, and traversal.
- Create a class `DynamicArray` with methods for insertion, deletion, and traversal.
- Perform a comparative analysis of time complexity.

### String Operations:
- Create a class `StringOperations` with methods for:
  - Concatenation
  - Substring extraction
  - Comparison
- Implement `characterFrequency` function to count the frequency of each character.

### Algorithm Analysis:
- Write a report analyzing time and space complexities.
- Solve and include solutions for recurrence relations for algorithms.

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

### Recurrence Relations Analysis
- **Binary Search**:  
  \( T(n) = T(n/2) + O(1) \Rightarrow O(\log n) \)
- **Merge Sort**:  
  \( T(n) = 2T(n/2) + O(n) \Rightarrow O(n \log n) \)

---

## 📝 Submission Guidelines
1. Submit your code as a GitHub repository with:
   - Implementation files
   - Test cases
   - A report on algorithm analysis
2. Include a `README.md` with instructions on how to run the code.
3. Submit the GitHub link on Moodle by the due date.

---

## 🏆 Evaluation Rubrics
| Criteria         | Excellent (4)   | Good (3)          | Satisfactory (2) | Needs Improvement (1) |
|------------------|-----------------|-------------------|------------------|-----------------------|
| Implementation   | Correct & Efficient | Mostly Correct  | Partially Correct | Incorrect            |
| Code Quality     | Well-Commented & Clean | Some Comments | Few Comments     | Poorly Commented     |
| Analysis         | Thorough & Accurate | Mostly Accurate | Some Inaccuracies | Inaccurate          |
| Submission       | On Time & Complete | Slightly Late   | Late & Incomplete | Not Submitted        |

---

## ✍️ Author
This lab assignment was completed by **Harshit Jaiswal (2301010397)** under the guidance of **Ms. Suman** for the **B.Tech Computer Science Engineering** program.

---

## 📜 License
This project is open-source for educational purposes. Feel free to use, modify, and distribute it.
 
---
 : )
 
