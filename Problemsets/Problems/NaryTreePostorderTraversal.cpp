#include <vector>
#include <stack>
#include <algorithm>

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

class Solution {
public:
    std::vector<int> postorder(Node* root) {
        std::vector<int> res;
        if (!root) return res;

        std::stack<Node*> s;
        s.push(root);

        while (!s.empty()) {
            Node *node = s.top();
            s.pop();
            for (Node *child : node->children) {
                s.push(child);
            }
            res.push_back(node->val);
        }

        std::reverse(res.begin(), res.end());
        return res;
    }
};
