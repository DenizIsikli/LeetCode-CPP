#include <vector>

using namespace std;

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
    pair<int, int> dfs(TreeNode *node, int &res) {
        if (node==nullptr) return {0, 0};
        auto leftSum = dfs(node->left, res);
        auto rightSum = dfs(node->right, res);
        int sum = node->val+leftSum.first+rightSum.first;
        int totalCount = leftSum.second+rightSum.second+1;
        if (sum/totalCount==node->val) res++;
        return {sum, totalCount};
    }

    int averageOfSubtree(TreeNode* root) {
        int res = 0;
        dfs(root, res);
        return res;
    }
};
