#include <vector>

// Definition for a Node.
class Node {
public:
    int val;
    std::vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, std::vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) return 0;
        int depth = 0;
        for (auto child : root->children) {
            int childDepth = maxDepth(child);
            depth = std::max(depth, childDepth);
        }
        return 1+depth;
    }
};
