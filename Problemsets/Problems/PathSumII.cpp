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
    void dfs(TreeNode *root, int targetSum, int curr, std::vector<int> &path, std::vector<std::vector<int>> &ans) {
        if (!root) return;
        path.push_back(root->val);
        curr += root->val;
        if (!root->left && !root->right && curr == targetSum) {
            ans.push_back(path);
        }
        dfs(root->left, targetSum, curr, path, ans);
        dfs(root->right, targetSum, curr, path, ans);
        path.pop_back();
    }

    std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum) {
        std::vector<std::vector<int>> ans;
        std::vector<int> path;
        dfs(root, targetSum, 0, path, ans);
        return ans;
    }
};
