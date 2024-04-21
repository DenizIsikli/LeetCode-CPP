#include <vector>
#include <climits>

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
    std::vector<int> ans;

    void trav(TreeNode *root) {
        if (root == nullptr) return;
        trav(root->right);
        ans.push_back(root->val);
        trav(root->left);
    }

    int getMinimumDifference(TreeNode* root) {
        trav(root);
        int minDiff = INT_MAX;
        for (int i = 1; i < ans.size(); ++i) {
            minDiff = std::min(minDiff, ans[i - 1] - ans[i]);
        }
        return minDiff;
    }
};
