#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

// AVL Tree Node
struct AVLNode {
    string region;
    AVLNode* left;
    AVLNode* right;
    int height;
    AVLNode(string r) : region(r), left(nullptr), right(nullptr), height(1) {}
};

// AVL Tree class
class AVLTree {
public:
    AVLNode* root;

    AVLTree() : root(nullptr) {}

    int height(AVLNode* node) {
        return node ? node->height : 0;
    }

    int balanceFactor(AVLNode* node) {
        return node ? height(node->left) - height(node->right) : 0;
    }

    AVLNode* rotateRight(AVLNode* node) {
        AVLNode* leftChild = node->left;
        node->left = leftChild->right;
        leftChild->right = node;
        node->height = max(height(node->left), height(node->right)) + 1;
        leftChild->height = max(height(leftChild->left), height(leftChild->right)) + 1;
        return leftChild;
    }

    AVLNode* rotateLeft(AVLNode* node) {
        AVLNode* rightChild = node->right;
        node->right = rightChild->left;
        rightChild->left = node;
        node->height = max(height(node->left), height(node->right)) + 1;
        rightChild->height = max(height(rightChild->left), height(rightChild->right)) + 1;
        return rightChild;
    }

    AVLNode* balance(AVLNode* node) {
        if (balanceFactor(node) > 1) {
            if (balanceFactor(node->left) < 0)
                node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        if (balanceFactor(node) < -1) {
            if (balanceFactor(node->right) > 0)
                node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        return node;
    }

    AVLNode* insert(AVLNode* node, string region) {
        if (!node)
            return new AVLNode(region);

        if (region < node->region)
            node->left = insert(node->left, region);
        else if (region > node->region)
            node->right = insert(node->right, region);

        node->height = max(height(node->left), height(node->right)) + 1;
        return balance(node);
    }

    void insert(string region) {
        root = insert(root, region);
    }

    void inorder(AVLNode* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->region << " ";
        inorder(node->right);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }
};

// Graph Node
struct GraphNode {
    string name;
    vector<pair<GraphNode*, int>> adjList; // Adjacency list of nodes and edge weights

    GraphNode(string n) : name(n) {}
};

// Graph class
class Graph {
public:
    vector<GraphNode*> nodes;

    Graph() {}

    GraphNode* addNode(string name) {
        GraphNode* node = new GraphNode(name);
        nodes.push_back(node);
        return node;
    }

    void addEdge(GraphNode* from, GraphNode* to, int weight) {
        from->adjList.push_back(make_pair(to, weight));
        to->adjList.push_back(make_pair(from, weight)); // for undirected graph
    }

    void bfs(GraphNode* start) {
        queue<GraphNode*> q;
        q.push(start);
        vector<bool> visited(nodes.size(), false);
        visited[0] = true;

        while (!q.empty()) {
            GraphNode* node = q.front();
            q.pop();
            cout << node->name << " ";

            for (auto& adj : node->adjList) {
                if (!visited[find(nodes.begin(), nodes.end(), adj.first) - nodes.begin()]) {
                    visited[find(nodes.begin(), nodes.end(), adj.first) - nodes.begin()] = true;
                    q.push(adj.first);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    // Testing AVL Tree
    AVLTree avl;
    avl.insert("Region1");
    avl.insert("Region3");
    avl.insert("Region2");
    cout << "AVL Tree In-order Traversal: ";
    avl.inorder();

    // Testing Graph
    Graph g;
    GraphNode* A = g.addNode("A");
    GraphNode* B = g.addNode("B");
    GraphNode* C = g.addNode("C");
    GraphNode* D = g.addNode("D");

    g.addEdge(A, B, 1);
    g.addEdge(B, C, 2);
    g.addEdge(A, C, 4);
    cout << "Graph BFS Traversal: ";
    g.bfs(A);

    return 0;
}
