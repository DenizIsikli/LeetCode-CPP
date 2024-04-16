#include <string>
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
    void treepath(TreeNode *root, std::string path, std::vector<std::string> &ans) {
        if (root == nullptr) return;
        path += std::to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(path);
            return;
        }
        path += "->";
        treepath(root->left, path, ans);
        treepath(root->right, path, ans);
    }

    std::vector<std::string> binaryTreePaths(TreeNode* root) {
        std::vector<std::string> ans;
        treepath(root, "", ans);
        return ans;
    }
};
