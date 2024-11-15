#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <set>
#include <unordered_map>

using namespace std;

// Class for Binary Tree
class BinaryTree {
    // Implement node structure, insert, delete, and traversal methods
};

// Class for Binary Search Tree
class BinarySearchTree : public BinaryTree {
    // Implement specific BST methods
};

// Class for AVL Tree
class AVLTree : public BinaryTree {
    // Implement AVL specific methods (insertion with rotation)
};

// Class for Graph
class Graph {
public:
    unordered_map<char, vector<pair<char, int>>> adjList;
    
    void addEdge(char u, char v, int weight = 1) {
        adjList[u].push_back({v, weight});
        adjList[v].push_back({u, weight});  // For undirected graph
    }
    
    void BFS(char start) {
        // Implement BFS
    }
    
    void DFSUtil(char v, set<char>& visited) {
        // Recursive DFS utility
    }
    
    void DFS(char start) {
        // Implement DFS using DFSUtil
    }
    
    void dijkstra(char source) {
        // Implement Dijkstra's Algorithm
    }
    
    void bellmanFord(char source) {
        // Implement Bellman-Ford Algorithm
    }
    
    void primMST() {
        // Implement Prim's Algorithm
    }
    
    void kruskalMST() {
        // Implement Kruskal's Algorithm
    }
};

int main() {
    // Test your classes and methods here
    return 0;
}
