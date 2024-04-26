/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode *root, int value, int depth) {
        if (root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr) {
            if (depth == 1) {
                TreeNode *newLeft = new TreeNode(value);
                TreeNode *newRight = new TreeNode(value);
                newLeft->left = root->left;
                newRight->right = root->right;
                root->left = newLeft;
                root->right = newRight;
                return;
            }
        }

        if (depth == 1) {
            TreeNode *newLeft = new TreeNode(value);
            TreeNode *newRight = new TreeNode(value);
            newLeft->left = root->left;
            newRight->right = root->right;
            root->left = newLeft;
            root->right = newRight;
            return;
        }

        if (root->left != nullptr) dfs(root->left, value, depth-1);
        if (root->right != nullptr) dfs(root->right, value, depth-1);

        return;
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode *newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        dfs(root, val, depth-1);
        return root;
    }
};
