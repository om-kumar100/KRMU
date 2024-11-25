"""
# 🌳 Data Structures Lab Sheet 6 - Developing a Dynamic Data Visualization Tool

## 📋 Course Information
- **School of Engineering & Technology**
- **Department**: SOET  
- **Session**: 2024-2025  
- **Program**: B.Tech Computer Science Engineering  
- **Course Code**: ENCS253  
- **Course Name**: Data Structure (C++)  
- **Faculty**: Ms. Suman  
- **Semester**:  
- **Batch**:  
- **Lab Date**:  

---

## 🚀 Project Summary
This lab focuses on implementing trees and graphs for data management and visualization. Key components include:
- **Binary Trees, Binary Search Trees, AVL Trees**: Implement tree operations and traversals.
- **Graphs**: Represent graphs using adjacency lists and matrices, implement BFS/DFS, shortest path algorithms, and minimum spanning tree algorithms.
- **Dynamic Visualization Tool**: Develop a user-friendly interface to visualize and interact with tree and graph structures.

---

## 📚 Objectives
- Implement various tree structures and their operations.
- Implement graph traversal and pathfinding algorithms.
- Create a user interface for interactive data structure visualization.
- Analyze the efficiency of tree and graph algorithms.

---

## 💻 Problem Description
### Tree Implementations:
- Implement classes for **Binary Tree**, **Binary Search Tree**, and **AVL Tree** with insertion, deletion, and traversal methods.
- Implement tree traversal methods: **in-order**, **pre-order**, **post-order**.

### Graph Implementations:
- Create a **Graph** class with methods for adding and removing nodes and edges.
- Implement graph traversal algorithms: **BFS** and **DFS**.
- Implement shortest path algorithms: **Dijkstra’s** and **Bellman-Ford**.
- Implement spanning tree algorithms: **Prim’s** and **Kruskal’s**.

### Dynamic Visualization Tool:
- Develop a user interface using a suitable framework (e.g., Tkinter, PyQt, or a web-based framework).
- Visualize tree and graph structures dynamically and allow user interaction for data manipulation.

---

## ⚙️ Instructions
1. **Tree Implementation**:
   - Create classes `BinaryTree`, `BinarySearchTree`, and `AVLTree`.
   - Implement in-order, pre-order, and post-order traversal methods.
2. **Graph Implementation**:
   - Create a `Graph` class for managing nodes and edges.
   - Implement BFS and DFS methods.
   - Implement Dijkstra’s and Bellman-Ford algorithms for shortest paths.
   - Implement Prim’s and Kruskal’s for minimum spanning trees.
3. **Visualization**:
   - Create a UI for visualizing tree and graph structures.
   - Ensure the interface allows user interaction for operations like node insertion and traversal visualization.

---

## 🧪 Test Cases
| Test Case              | Input                                              | Expected Output                           | Desired Output                       |
|------------------------|----------------------------------------------------|-------------------------------------------|--------------------------------------|
| **Binary Tree Insertion** | `insert(10), insert(5), insert(15)`             | In-order: `5, 10, 15`                     | `[5, 10, 15]`                        |
| **AVL Tree Balancing**    | `insert(30), insert(20), insert(10)`            | Root after balancing: `20`               | `20`                                 |
| **Graph BFS Traversal**   | `addEdge(A, B), addEdge(A, C), addEdge(B, D)`<br>`BFS(A)` | `A, B, C, D`                              | `[A, B, C, D]`                       |
| **Dijkstra's Algorithm**  | `addEdge(A, B, 1), addEdge(B, C, 2), addEdge(A, C, 4)`<br>`shortestPath(A, C)` | Shortest path: `A -> B -> C` | `[A, B, C]`                          |
| **Prim’s Algorithm**      | `addEdge(A, B, 1), addEdge(B, C, 2), addEdge(A, C, 3)` | Minimum Spanning Tree: `A-B, B-C`        | `[A-B, B-C]`                         |

---

## 📈 Expected Learnings
- Understanding of **tree and graph data structures** and their implementations.
- Mastery of tree operations and traversal techniques.
- Proficiency in graph traversal and shortest path algorithms.
- Experience with building interactive tools for data visualization.

---

## 📝 Submission Guidelines
- Ensure code is well-commented and follows standard coding practices.
- Submit as a GitHub repository containing:
  - Implementation files (`.cpp`, `.h` if applicable)
  - Test cases
  - A sample output of your program
  - A `README.md` with clear instructions

---

## 🏆 Evaluation Rubrics
| Criteria         | Excellent (4)          | Good (3)             | Satisfactory (2)       | Needs Improvement (1)  |
|------------------|------------------------|----------------------|------------------------|------------------------|
| **Implementation** | Correct & efficient   | Mostly correct       | Partially correct      | Incorrect              |
| **Code Quality**   | Well-commented, clean | Some comments        | Few comments           | Poorly commented       |
| **Functionality**  | All features working  | Most features working| Some features working  | Features not working   |
| **Problem Solving**| Innovative solutions  | Good solutions       | Basic solutions        | Incorrect solutions    |
| **Documentation**  | Thorough & clear      | Mostly clear         | Somewhat clear         | Unclear                |
| **Submission**     | On time & complete    | Slightly late        | Late & incomplete      | Not submitted          |

---

## ✍️ Author
This lab assignment was completed by **om kumar (2301010355)** under the guidance of **Ms. Suman** for the **B.Tech Computer Science Engineering** program.

---

## 📜 License
This project is open-source for educational purposes. Feel free to use, modify, and distribute it.

---
: )
