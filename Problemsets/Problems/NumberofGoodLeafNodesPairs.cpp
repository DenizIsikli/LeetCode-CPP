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
    std::vector<int> dfs(TreeNode* root, int distance, int &ans) {
        if (!root) return {};
        if (!root->left && !root->right) return {1};
        std::vector<int> left = dfs(root->left, distance, ans);
        std::vector<int> right = dfs(root->right, distance, ans);
        for (int l : left) {
            for (int r : right) {
                if (l + r <= distance) {
                    ans++;
                }
            }
        }
        std::vector<int> res;
        for (int l : left) {
            if (l + 1 < distance) {
                res.push_back(l + 1);
            }
        }
        for (int r : right) {
            if (r + 1 < distance) {
                res.push_back(r + 1);
            }
        }
        return res;
    }

    int countPairs(TreeNode* root, int distance) {
        int ans = 0;
        dfs(root, distance, ans);
        return ans;
    }
};
