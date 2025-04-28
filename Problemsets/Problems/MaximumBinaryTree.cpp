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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty()) return nullptr;

        int maxIndex = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }
        TreeNode* root = new TreeNode(nums[maxIndex]);
        vector<int> leftSubArray(nums.begin(), nums.begin() + maxIndex);
        vector<int> rightSubArray(nums.begin() + maxIndex + 1, nums.end());

        root->left = constructMaximumBinaryTree(leftSubArray);
        root->right = constructMaximumBinaryTree(rightSubArray);

        return root;
    }
};
