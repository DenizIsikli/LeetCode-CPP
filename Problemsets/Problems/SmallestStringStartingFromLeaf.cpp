#include <string>
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

    void dfs(TreeNode *root, std::string path, std::string &ans) {
        if (root==nullptr) return;
        path += (char)('a'+root->val);
        if (!root->left && !root->right) {
            std::reverse(path.begin(), path.end());
            if (ans.empty() || path < ans) ans = path;
        }

        dfs(root->left, path, ans);
        dfs(root->right, path, ans);
    }


    std::string smallestFromLeaf(TreeNode* root) {
        std::string ans;
        dfs(root, "", ans);
        return ans;
    }
};
