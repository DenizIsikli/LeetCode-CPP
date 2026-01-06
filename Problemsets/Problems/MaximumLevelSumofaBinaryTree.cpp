#include <bits/stdc++.h>

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
    vector<int>sm={INT_MIN};
    void dfs(TreeNode*node,int level=1){
        if(node==nullptr)return;
        if(sm.size()==level)sm.push_back(node->val);
        else sm[level]+=node->val;
        dfs(node->left,level+1);
        dfs(node->right,level+1);
    }
    int maxLevelSum(TreeNode* root) {
        dfs(root);
        return max_element(sm.begin(),sm.end())-sm.begin();
    }
};
