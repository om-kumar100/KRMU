
# Lab Sheet 8 (Unit IV)

## Title: Implementing an Efficient E-Commerce Search and Sort System

### Introduction
Efficient search and sort algorithms are fundamental in data structures, providing the backbone for many real-world applications. This project-based assignment focuses on creating an efficient search and sort system for an e-commerce platform. The system will handle various products, allowing users to search and sort items based on different criteria. This project will utilize advanced sorting and searching algorithms to ensure optimal performance.

### Objective
Develop an efficient e-commerce search and sort system using various sorting and searching algorithms to manage product data effectively.

### Problem Description
- **Product Data Management**: Implement a `Product` class and methods to add, update, and delete products.
- **Sorting Functionality**: Implement sorting algorithms including Insertion Sort, Selection Sort, Bubble Sort, Merge Sort, Quicksort, Heapsort, Counting Sort, Radix Sort, and Bucket Sort.
- **Searching Functionality**: Implement Sequential Search and Binary Search (both recursive and iterative).
- **E-Commerce System**: Create a user interface using C++ frameworks to manage and visualize the product list.

### Instructions
1. **Product Class Implementation**:
    ```cpp
    class Product {
    public:
        int id;
        std::string name;
        std::string category;
        float price;
        float rating;

        Product(int id, std::string name, std::string category, float price, float rating)
            : id(id), name(name), category(category), price(price), rating(rating) {}
    };
    ```
2. **Sorting Algorithm Implementation**: Implement each algorithm and create methods to sort by price, rating, and name.
3. **Searching Algorithm Implementation**: Implement methods for Sequential Search and Binary Search.
4. **User Interface Development**: Develop a UI using a framework such as Qt for C++.

### Submission Guidelines
- Submit your code as a GitHub repository.
- Include a README file with instructions to run the code.
- Ensure your repository has implementation files, test cases, and sample outputs.

---

## ✍️ Author
This lab assignment was completed by **Harshit Jaiswal (2301010397)** under the guidance of **Ms. Suman** for the **B.Tech Computer Science Engineering** program.

---

## 📜 License
This project is open-source for educational purposes. Feel free to use, modify, and distribute it.

---
: )
