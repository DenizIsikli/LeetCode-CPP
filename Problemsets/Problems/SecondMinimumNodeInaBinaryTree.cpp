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
void dfs(TreeNode *root,set<int>&s){
    if(!root)return;
    s.insert(root->val);
    dfs(root->left,s);
    dfs(root->right,s);
}
class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        int ans=-1;
        dfs(root,s);
        if(s.size()<2)return -1;
        return *next(s.begin());
    }
};
