#include <vector>
#include <unordered_set>

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
    TreeNode *dfs(TreeNode *root, bool is_root, std::unordered_set<int> &to_delete_set, std::vector<TreeNode*> &v) {
        if (!root) return nullptr;
        bool should_delete = to_delete_set.count(root->val);
        if (is_root && !should_delete) v.push_back(root);
        root->left = dfs(root->left, should_delete, to_delete_set, v);
        root->right = dfs(root->right, should_delete, to_delete_set, v);
        return should_delete ? nullptr : root;
    }

    std::vector<TreeNode*> delNodes(TreeNode* root, std::vector<int>& to_delete) {
        std::vector<TreeNode*> res;
        std::unordered_set<int> to_delete_set(to_delete.begin(), to_delete.end());
        dfs(root, true, to_delete_set, res);
        return res;        
    }
};
