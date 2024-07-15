#include <vector>
#include <algorithm>
#include <functional>

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
    std::vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        std::vector<int> ans;

        std::function<void(TreeNode*)> inorder = [&](TreeNode* node) {
            if (node == nullptr) {
                return;
            }
            inorder(node->left);
            ans.push_back(node->val);
            inorder(node->right);
        };

        inorder(root1);
        inorder(root2);

        std::sort(ans.begin(), ans.end());
        return ans;
    }
};
