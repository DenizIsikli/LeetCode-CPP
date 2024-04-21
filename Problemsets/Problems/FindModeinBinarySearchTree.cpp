#include <vector>
#include <unordered_map>

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
    std::unordered_map<int, int> freq;
    void trav(TreeNode *root) {
        if (root == nullptr) return;
        freq[root->val]++;
        trav(root->left);
        trav(root->right);
    }

    std::vector<int> findMode(TreeNode* root) {
        trav(root);
        int maxFreq = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            maxFreq = std::max(maxFreq, it->second);
        }
        std::vector<int> ans;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second == maxFreq) {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};
