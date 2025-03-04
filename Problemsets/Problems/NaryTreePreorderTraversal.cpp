#include <vector>

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder(Node *root, std::vector<int> &res) {
        if (!root) return;
        res.push_back(root->val);
        for (auto child : root->children) {
            preorder(child, res);
        }
    }

    std::vector<int> preorder(Node* root) {
        std::vector<int> res;
        preorder(root, res);
        return res;
    }
};
