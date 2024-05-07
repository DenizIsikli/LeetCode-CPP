#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode *first, *last, *prev;
    void inorder(TreeNode *root) {
        if (root==nullptr) return;
        inorder(root->left);
        if (prev!=nullptr && prev->val > root->val) {
            if (first==nullptr) {
                first = prev;
            }
            last = root;
        }
        prev = root;
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        if (root == nullptr) return;
        first = last = prev = nullptr;
        inorder(root);
        std::swap(first->val, last->val);
    }
};
