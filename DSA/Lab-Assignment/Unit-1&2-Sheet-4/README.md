# Lab Assignment 4: Linked Lists and Advanced Applications

### Title: Linked List Implementations and Advanced Applications

---

## Introduction
Linked lists are fundamental data structures that allow for efficient insertion and deletion of elements. They come in various forms, including singly linked lists, doubly linked lists, and circular linked lists. This assignment focuses on implementing these types of linked lists and exploring their applications in advanced data structure scenarios.

---

## Objective
The objective of this assignment is to implement various types of linked lists and explore their applications in advanced data structure scenarios.

---

## Problem Description
1. **Implementing Linked Lists:**
   - Implement singly linked lists with methods for insertion, deletion, and traversal.
   - Implement doubly linked lists with methods for insertion, deletion, and traversal.
   - Implement circular linked lists with methods for insertion, deletion, and traversal.
   
2. **Applications:**
   - **Postfix Calculator**: Implement a stack-based solution for evaluating postfix expressions.
   - **Queue-Based System Simulation**: Simulate a queue-based ticketing system.
   - **Priority Queue Using Heaps**: Implement a priority queue using a heap data structure.

---

## Instructions
1. **Linked List Implementation:**
   - Create classes **SinglyLinkedList**, **DoublyLinkedList**, and **CircularLinkedList**.
   - Each class should have methods for insertion, deletion, and traversal.
   
2. **Postfix Calculator:**
   - Write a class **PostfixCalculator** that evaluates postfix expressions using a stack.
   
3. **Queue-Based Ticketing System:**
   - Write a class **TicketQueue** that simulates a ticketing system using a queue.
   
4. **Priority Queue Implementation:**
   - Write a class **PriorityQueue** that uses a heap to manage elements based on their priority.

---

## Submission Guidelines
- Your code should be well-commented and adhere to standard coding practices.
- Submit your code as a GitHub repository. Include a README.md file with instructions on how to run your code.
- Ensure your repository includes:
  - Implementation files
  - Test cases
  - A sample output of your program

---

## Test Cases and Expected Outputs

| Test Case              | Input                                       | Expected Output       | Desired Output       |
|------------------------|---------------------------------------------|-----------------------|----------------------|
| Singly Linked List      | insert(1), insert(2), delete(1), traverse() | 2                     | [2]                  |
| Doubly Linked List      | insert(1), insert(2), delete(2), traverse() | 1                     | [1]                  |
| Circular Linked List    | insert(1), insert(2), traverse()            | 1 -> 2 -> 1           | 1 -> 2 -> 1          |
| Postfix Calculator      | "5 1 2 + 4 * + 3 -"                         | 14                    | 14                   |
| Ticket Queue            | enqueue("ticket1"), enqueue("ticket2"), dequeue() | "ticket1"        | "ticket1"            |
| Priority Queue          | insert(3), insert(1), insert(2), remove()   | 1                     | 1                    |

---

## Expected Outcomes
- Proficiency in implementing different types of linked lists and performing various operations on them.
- Understanding and implementation of stack-based solutions for evaluating postfix expressions.
- Ability to simulate real-world systems using queues.
- Skill in managing elements based on priority using heap data structures.

---

## Evaluation Rubrics

| Criteria                | Excellent (4)        | Good (3)           | Satisfactory (2)    | Needs Improvement (1) |
|-------------------------|----------------------|--------------------|---------------------|------------------------|
| Implementation           | Correct and efficient| Mostly correct     | Partially correct   | Incorrect              |
| Code Quality             | Well-commented, clean| Some comments, mostly clean | Few comments, some issues | Poorly commented, messy |
| Functionality            | All features working | Most features working correctly | Some features working | Features not working  |
| Problem Solving          | Optimal solutions    | Good solutions with minor issues | Basic solutions with some issues | Incorrect solutions |
| Documentation            | Thorough and clear   | Mostly clear       | Somewhat clear      | Unclear                |
| Submission               | On time, complete    | Slightly late, complete | Late, incomplete   | Not submitted          |

---

## Author
This lab assignment was completed by **Harshit Jaiswal (2301010397)** under the guidance of **Ms. Suman** for the **B.Tech Computer Science Engineering** program.

---

## License
This project is open-source for educational purposes. Feel free to use, modify, and distribute it.

---

