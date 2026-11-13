#include<bits/stdc++.h>
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
    int dfs(TreeNode*root,int mx,int &ans){
        if(!root)return 0;
        if(root->val>=mx){
            ans++;
            mx=root->val;
        }
        dfs(root->left,mx,ans);
        dfs(root->right,mx,ans);
        return ans;
    }
    int goodNodes(TreeNode* root) {
        int ans=0;
        dfs(root,root->val,ans);
        return ans;
    }
};
