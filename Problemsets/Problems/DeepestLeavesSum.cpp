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
    int res = 0;
    int max = 0;

    void preorder(TreeNode *node, int curr) {
        if (node==nullptr) return;
        if (node->left==nullptr&&node->right==nullptr) {
            if (curr==max) {
                res+=node->val;
            }
            if (curr>max) {
                res = 0;
                max = curr;
                res += node->val;
            }
        }
        preorder(node->left, curr+1);
        preorder(node->right, curr+1);
    }

    int deepestLeavesSum(TreeNode* root) {
        preorder(root, 1);
        return res;
    }
};
