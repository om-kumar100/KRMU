#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

// Singly Linked List
class SinglyLinkedList {
public:
    struct Node {
        int data;
        Node* next;
        Node(int data) : data(data), next(nullptr) {}
    };
    
    Node* head;
    
    SinglyLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteNode(int value) {
        if (!head) return;
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != value) {
            temp = temp->next;
        }
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }

    void traverse() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

// Doubly Linked List
class DoublyLinkedList {
public:
    struct Node {
        int data;
        Node* next;
        Node* prev;
        Node(int data) : data(data), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    DoublyLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void deleteNode(int value) {
        if (!head) return;
        Node* temp = head;
        while (temp && temp->data != value) {
            temp = temp->next;
        }
        if (!temp) return;  // Node not found
        if (temp->prev) temp->prev->next = temp->next;
        if (temp->next) temp->next->prev = temp->prev;
        if (temp == head) head = temp->next;
        delete temp;
    }

    void traverse() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

// Circular Linked List
class CircularLinkedList {
public:
    struct Node {
        int data;
        Node* next;
        Node(int data) : data(data), next(nullptr) {}
    };

    Node* head;
    CircularLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void traverse() {
        if (!head) return;
        Node* temp = head;
        do {
            std::cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        std::cout << std::endl;
    }
};

// Postfix Calculator
class PostfixCalculator {
public:
    int evaluate(const std::string& expression) {
        std::stack<int> stack;
        for (char ch : expression) {
            if (isdigit(ch)) {
                stack.push(ch - '0');
            } else {
                int operand2 = stack.top(); stack.pop();
                int operand1 = stack.top(); stack.pop();
                if (ch == '+') stack.push(operand1 + operand2);
                else if (ch == '-') stack.push(operand1 - operand2);
                else if (ch == '*') stack.push(operand1 * operand2);
                else if (ch == '/') stack.push(operand1 / operand2);
            }
        }
        return stack.top();
    }
};

// Ticket Queue using Queue
class TicketQueue {
public:
    std::queue<std::string> queue;

    void enqueue(const std::string& ticket) {
        queue.push(ticket);
    }

    std::string dequeue() {
        if (queue.empty()) return "";
        std::string ticket = queue.front();
        queue.pop();
        return ticket;
    }
};

// Priority Queue using Heap
class PriorityQueue {
public:
    std::vector<int> heap;

    void insert(int value) {
        heap.push_back(value);
        std::push_heap(heap.begin(), heap.end());
    }

    int remove() {
        if (heap.empty()) return -1;
        std::pop_heap(heap.begin(), heap.end());
        int top = heap.back();
        heap.pop_back();
        return top;
    }
};

int main() {
    // Singly Linked List test
    SinglyLinkedList sll;
    sll.insert(1);
    sll.insert(2);
    sll.deleteNode(1);
    sll.traverse();  // Expected: 2

    // Doubly Linked List test
    DoublyLinkedList dll;
    dll.insert(1);
    dll.insert(2);
    dll.deleteNode(2);
    dll.traverse();  // Expected: 1

    // Circular Linked List test
    CircularLinkedList cll;
    cll.insert(1);
    cll.insert(2);
    cll.traverse();  // Expected: 1 -> 2 -> 1

    // Postfix Calculator test
    PostfixCalculator calc;
    std::cout << "Postfix result: " << calc.evaluate("5 1 2 + 4 * + 3 -") << std::endl;  // Expected: 14

    // Ticket Queue test
    TicketQueue tq;
    tq.enqueue("ticket1");
    tq.enqueue("ticket2");
    std::cout << "Processed: " << tq.dequeue() << std::endl;  // Expected: ticket1

    // Priority Queue test
    PriorityQueue pq;
    pq.insert(3);
    pq.insert(1);
    pq.insert(2);
    std::cout << "Removed: " << pq.remove() << std::endl;  // Expected: 1

    return 0;
}
