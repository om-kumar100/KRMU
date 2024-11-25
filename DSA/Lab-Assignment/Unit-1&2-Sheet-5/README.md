# Lab Assignment 5: Project-Based Application of Data Structures

## Title: Building a Simple Text Editor

### Introduction
This project-based assignment integrates multiple data structures, including arrays, stacks, and queues, into the development of a simple text editor. The text editor supports basic operations such as inserting text, deleting text, undo/redo functionality, and clipboard management for copy-paste operations. This assignment provides practical experience in applying data structures to real-world applications.

### Objective
Develop a simple text editor that uses arrays, stacks, and queues to manage text operations, including editing, undo/redo functionality, and clipboard management.

### Problem Description
- **Text Editor Operations**:
  - Implement the text editor using an array to store characters.
  - Use a stack to manage undo/redo operations.
  - Use a queue to manage the clipboard for copy-paste operations.

### Functional Requirements
1. **Insert Text**: Method `insertText(position, text)` to insert characters at the specified position.
2. **Delete Text**: Method `deleteText(position, length)` to remove a specified number of characters starting from a given position.
3. **Undo/Redo Operations**: Methods `undo()` and `redo()` to reverse and reapply the last operations.
4. **Clipboard Management**: Methods `copy(position, length)` and `paste(position)` to copy text to the clipboard and paste it.

### Instructions
1. **Text Editor Implementation**:
   - Create a class `TextEditor` that uses an array to store text.
   - Implement methods for inserting and deleting text.
   - Use stacks for undo/redo operations.
   - Use a queue for clipboard functionality.

2. **Sample Operations**:
   - `insertText(0, "Hello")`
   - `deleteText(0, 2)`
   - `undo()`, `redo()`
   - `copy(0, 2)`, `paste(5)`

### Test Cases and Expected Outputs
| Test Case             | Input                                      | Expected Output | Desired Output |
|-----------------------|---------------------------------------------|-----------------|----------------|
| Insert Text           | `insertText(0, "Hello")`                   | "Hello"         | "Hello"        |
| Delete Text           | `insertText(0, "Hello"), deleteText(0, 2)` | "llo"           | "llo"          |
| Undo Operation        | `insertText(0, "Hello"), deleteText(0, 2), undo()` | "Hello" | "Hello" |
| Redo Operation        | `insertText(0, "Hello"), deleteText(0, 2), undo(), redo()` | "llo" | "llo" |
| Copy-Paste Operation  | `insertText(0, "Hello"), copy(0, 2), paste(5)` | "HelloHe" | "HelloHe" |

### Expected Outcomes
- Application of arrays, stacks, and queues in practical scenarios.
- Implementation of basic text editor operations.
- Understanding of undo/redo functionality using stacks.
- Usage of queues for clipboard management.

### Evaluation Rubrics
| Criteria       | Excellent (4) | Good (3) | Satisfactory (2) | Needs Improvement (1) |
|----------------|---------------|----------|-------------------|-----------------------|
| Implementation | Correct and efficient | Mostly correct | Partially correct | Incorrect |
| Code Quality   | Well-commented, clean | Some comments | Few comments | Poorly commented |
| Functionality  | All features work | Most features work | Some features work | Features not working |
| Problem Solving| Innovative solutions | Good solutions | Basic solutions | Incorrect solutions |
| Documentation  | Thorough and clear | Mostly clear | Somewhat clear | Unclear |
| Submission     | On time, complete | Slightly late | Late, incomplete | Not submitted |

### Submission Guidelines
- Submit the code as a GitHub repository with a README file and implementation files.
- Include test cases and a sample output.
- Submit the GitHub repository link on Moodle.

---

## ✍️ Author
This lab assignment was completed by **om kumar (2301010355)** under the guidance of **Ms. Suman** for the **B.Tech Computer Science Engineering** program.

---

## 📜 License
This project is open-source for educational purposes. Feel free to use, modify, and distribute it.

---
: )
