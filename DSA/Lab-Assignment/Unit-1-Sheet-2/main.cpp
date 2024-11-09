#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Static Array Class
class StaticArray {
public:
    int arr[100];
    int size = 0;

    void insert(int value) {
        arr[size] = value;
        size++;
    }

    void deleteElement(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                for (int j = i; j < size - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                size--;
                return;
            }
        }
    }

    void traverse() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Dynamic Array Class
class DynamicArray {
public:
    vector<int> arr;

    void insert(int value) {
        arr.push_back(value);
    }

    void deleteElement(int value) {
        for (auto it = arr.begin(); it != arr.end(); ++it) {
            if (*it == value) {
                arr.erase(it);
                return;
            }
        }
    }

    void traverse() {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// String Operations Class
class StringOperations {
public:
    string concatenate(string str1, string str2) {
        return str1 + str2;
    }

    string substring(string str, int start, int length) {
        return str.substr(start, length);
    }

    bool compare(string str1, string str2) {
        return str1 == str2;
    }

    unordered_map<char, int> characterFrequency(string str) {
        unordered_map<char, int> freq;
        for (char c : str) {
            freq[c]++;
        }
        return freq;
    }
};

int main() {
    // Testing Static Array
    StaticArray staticArr;
    staticArr.insert(1);
    staticArr.insert(2);
    staticArr.deleteElement(1);
    staticArr.traverse();  // Expected output: 2

    // Testing Dynamic Array
    DynamicArray dynamicArr;
    dynamicArr.insert(1);
    dynamicArr.insert(2);
    dynamicArr.deleteElement(1);
    dynamicArr.traverse();  // Expected output: 2

    // Testing String Operations
    StringOperations strOps;
    cout << "Concatenation: " << strOps.concatenate("hello", "world") << endl;  // Expected: helloworld
    cout << "Substring: " << strOps.substring("hello", 2, 3) << endl;  // Expected: llo
    cout << "Comparison: " << (strOps.compare("hello", "world") ? "True" : "False") << endl;  // Expected: False

    // Testing Character Frequency
    unordered_map<char, int> freq = strOps.characterFrequency("hello");
    for (auto& pair : freq) {
        cout << pair.first << ": " << pair.second << endl;  // Expected: h:1 e:1 l:2 o:1
    }

    return 0;
}
