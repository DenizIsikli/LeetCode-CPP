#include <vector>

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
    std::vector<int> v1;
    std::vector<int> v2;

    void inorder(TreeNode *root, std::vector<int> &result) {
        if (root==nullptr) return;
        inorder(root->left, result);
        if (root->left==nullptr && root->right==nullptr) {
            result.push_back(root->val);
        }
        inorder(root->right, result);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inorder(root1, v1);
        inorder(root2, v2);
        if (v1.size()!=v2.size()) return 0;
        return v1==v2;
    }
};
