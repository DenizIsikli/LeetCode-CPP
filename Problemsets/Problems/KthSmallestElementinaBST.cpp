#include <algorithm>
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
    void preorderTrav(TreeNode*root,vector<int>&v){
        if(root==nullptr)return;
        v.push_back(root->val);
        preorderTrav(root->left,v);
        preorderTrav(root->right,v);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        vector<int>v;
        preorderTrav(root,v);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
