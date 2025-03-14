#include <vector>
#include <queue>

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
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        if (root==nullptr) return {};
        std::vector<std::vector<int>> res;
        std::queue<TreeNode*> q;

        q.push(root);

        while (!q.empty()) {
            int size = q.size(); 
            std::vector<int> lvl;
            for (int i = 0; i < size; i++) {
                TreeNode *temp = q.front();
                q.pop();

                lvl.push_back(temp->val);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            res.push_back(lvl);
        }

        return res;
    }
};
