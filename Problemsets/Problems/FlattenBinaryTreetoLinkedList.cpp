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
    vector<int>tmp;
    void preorder(TreeNode*root){
        if(!root)return;
        tmp.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    void flatten(TreeNode* root) {
        if(!root)return;
        preorder(root);
        TreeNode*curr=root;
        for(int i=1;i<tmp.size();i++){
            curr->left=NULL;
            curr->right=new TreeNode(tmp[i]);
            curr=curr->right;
        }
    }
};
