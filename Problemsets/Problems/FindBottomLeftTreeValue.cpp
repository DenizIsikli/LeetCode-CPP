#include <vector>
#include <unordered_map>
#include <functional>
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
    int findBottomLeftValue(TreeNode* root) {
        std::unordered_map<int, std::vector<int>> m;

        std::function<void(TreeNode*, int)> dfs = [&](TreeNode* node, int depth) {
            if (node == nullptr) return;

            m[depth].push_back(node->val);
            dfs(node->left, depth + 1);
            dfs(node->right, depth + 1);
        };

        dfs(root, 0);
        int maxDepth = 0;
        for (auto val : m) maxDepth = std::max(maxDepth, val.first);
        return m[maxDepth][0];
    }
};
