#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>

class TextEditor {
private:
    std::vector<char> text;
    std::stack<std::vector<char>> undoStack;
    std::stack<std::vector<char>> redoStack;
    std::queue<std::string> clipboardQueue;

public:
    // Insert text at a specified position
    void insertText(int position, const std::string& str) {
        saveStateForUndo();
        text.insert(text.begin() + position, str.begin(), str.end());
        clearRedoStack();
    }

    // Delete text starting from a specified position and length
    void deleteText(int position, int length) {
        saveStateForUndo();
        text.erase(text.begin() + position, text.begin() + position + length);
        clearRedoStack();
    }

    // Undo the last operation
    void undo() {
        if (!undoStack.empty()) {
            redoStack.push(text);
            text = undoStack.top();
            undoStack.pop();
        }
    }

    // Redo the last undone operation
    void redo() {
        if (!redoStack.empty()) {
            undoStack.push(text);
            text = redoStack.top();
            redoStack.pop();
        }
    }

    // Copy text to clipboard
    void copy(int position, int length) {
        std::string copiedText(text.begin() + position, text.begin() + position + length);
        clipboardQueue.push(copiedText);
    }

    // Paste text from clipboard at a specified position
    void paste(int position) {
        if (!clipboardQueue.empty()) {
            saveStateForUndo();
            std::string pasteText = clipboardQueue.front();
            text.insert(text.begin() + position, pasteText.begin(), pasteText.end());
            clearRedoStack();
        }
    }

    // Display the current text
    void displayText() const {
        for (char c : text) {
            std::cout << c;
        }
        std::cout << std::endl;
    }

private:
    // Save the current state for undo functionality
    void saveStateForUndo() {
        undoStack.push(text);
    }

    // Clear the redo stack when a new action is performed
    void clearRedoStack() {
        while (!redoStack.empty()) {
            redoStack.pop();
        }
    }
};

int main() {
    TextEditor editor;

    // Test insertText
    editor.insertText(0, "Hello");
    editor.displayText();  // Expected: Hello

    // Test deleteText
    editor.deleteText(0, 2);
    editor.displayText();  // Expected: llo

    // Test undo
    editor.undo();
    editor.displayText();  // Expected: Hello

    // Test redo
    editor.redo();
    editor.displayText();  // Expected: llo

    // Test copy and paste
    editor.insertText(0, "Hello");
    editor.copy(0, 2);
    editor.paste(5);
    editor.displayText();  // Expected: HelloHe

    return 0;
}
