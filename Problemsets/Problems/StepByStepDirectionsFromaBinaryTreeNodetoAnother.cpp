#include <string>

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
    bool helper(TreeNode *root, int val, std::string &path) {
        if (root->val == val) return true;
        if (root->left && helper(root->left, val, path)) path.push_back('L');
        else if (root->right && helper(root->right, val, path)) path.push_back('R');
        return !path.empty();
    }

    std::string getDirections(TreeNode* root, int startValue, int destValue) {
        std::string s, d;
        helper(root, startValue, s);
        helper(root, destValue, d);
        while (!s.empty() && !d.empty() && s.back() == d.back()) {
            s.pop_back();
            d.pop_back();
        }
        return std::string(s.size(), 'U')+std::string(d.rbegin(), d.rend());
    }
};
