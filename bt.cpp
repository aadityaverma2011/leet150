#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    // Constructor
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Class for the BinaryTree
class BinaryTree {
public:
    TreeNode* root;

    // Constructor
    BinaryTree() : root(nullptr) {}

    // Function to insert nodes (for simplicity, we're just showing a basic insert function)
    TreeNode* insert(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }
        if (val < node->val) {
            node->left = insert(node->left, val);
        } else {
            node->right = insert(node->right, val);
        }
        return node;
    }

    // Function to perform preorder traversal
    void preorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        cout<<node->val<<endl;
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }
};

int main() {
    BinaryTree tree;
    
    // Initialize the tree with some values
    tree.root = tree.insert(tree.root, 10);
    tree.insert(tree.root, 5);
    tree.insert(tree.root, 15);
    tree.insert(tree.root, 3);
    tree.insert(tree.root, 7);
    
    // Call the preorderTraversal function (you'll implement it)
    cout << "Preorder Traversal: ";
    tree.preorderTraversal(tree.root);
    
    return 0;
}
