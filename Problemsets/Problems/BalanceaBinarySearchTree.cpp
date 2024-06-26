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
    void inorderTraversal(TreeNode *root, std::vector<int> &inorder) {
        if (root==NULL) return;
        inorderTraversal(root->left, inorder);
        inorder.push_back(root->val);
        inorderTraversal(root->right, inorder);
    }

    TreeNode *buildBalancedBST(std::vector<int> &inorder, int start, int end) {
        if (start > end) return NULL;
        int mid = start+(end-start)/2;
        TreeNode *root = new TreeNode(inorder[mid]);
        root->left = buildBalancedBST(inorder, start, mid-1);
        root->right = buildBalancedBST(inorder, mid+1, end);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        std::vector<int> inorder;
        inorderTraversal(root, inorder);
        return buildBalancedBST(inorder, 0, inorder.size() - 1);
    }
};
