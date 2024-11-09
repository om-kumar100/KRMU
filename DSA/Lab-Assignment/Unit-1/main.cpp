
#include <iostream>
#include <unordered_map>
using namespace std;

// Static Array Implementation
class StaticArray {
private:
    int arr[10]; // Static size of 10
    int size;

public:
    StaticArray() : size(0) {}

    void insert(int value) {
        if (size < 10) {
            arr[size++] = value;
        } else {
            cout << "Array is full!\n";
        }
    }

    void deleteAt(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index!\n";
            return;
        }
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void traverse() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Dynamic Array Implementation
class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;

public:
    DynamicArray(int cap = 2) : capacity(cap), size(0) {
        arr = new int[capacity];
    }

    void insert(int value) {
        if (size == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++)
                newArr[i] = arr[i];
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = value;
    }

    void deleteAt(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index!\n";
            return;
        }
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void traverse() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

// String Operations
class StringOperations {
public:
    static string concatenate(string a, string b) {
        return a + b;
    }

    static string substring(string s, int start, int length) {
        return s.substr(start, length);
    }

    static bool compare(string a, string b) {
        return a == b;
    }

    static unordered_map<char, int> characterFrequency(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        return freq;
    }
};

// Display character frequency
void displayFrequency(const unordered_map<char, int>& freq) {
    for (auto& pair : freq) {
        cout << pair.first << ": " << pair.second << "\n";
    }
}

int main() {
    // Static Array Operations
    StaticArray sArr;
    sArr.insert(1);
    sArr.insert(2);
    sArr.deleteAt(0);
    sArr.traverse(); // Output: 2

    // Dynamic Array Operations
    DynamicArray dArr;
    dArr.insert(1);
    dArr.insert(2);
    dArr.deleteAt(0);
    dArr.traverse(); // Output: 2

    // String Operations
    StringOperations strOps;
    cout << strOps.concatenate("hello", "world") << endl;
    cout << strOps.substring("hello", 2, 3) << endl;
    cout << strOps.compare("abc", "abc") << endl;

    auto freq = strOps.characterFrequency("hello");
    displayFrequency(freq);

    return 0;
}
