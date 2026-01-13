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
    int mxDepth=0;
    TreeNode *lca=nullptr;
    int dfs(TreeNode *root,int depth){
        mxDepth=max(mxDepth,depth);
        if(root==nullptr)return depth;
        int l=dfs(root->left,depth+1);
        int r=dfs(root->right,depth+1);
        if(l==mxDepth&&r==mxDepth)lca=root;
        return max(l,r);
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        dfs(root,0);
        return lca;
    }
};
