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
    vector<int>v;
    void dfs(TreeNode*root){
        if(!root)return;
        dfs(root->left);
        v.push_back(root->val);
        dfs(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        dfs(root);
        sort(v.begin(),v.end());
        int i=0,j=v.size()-1;
        while(i<j){
            if(v[i]+v[j]==k)return true;
            else if(v[i]+v[j]<k)i++;
            else j--;
        }
        return false;
    }
};
