#include <bits/stdc++.h>
using namespace std;
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
    TreeNode* constructBST(vector<int>&preorder,vector<int>&postorder,int &idx,int start,int end){
        if(idx>=preorder.size()||start>end)return nullptr;
        TreeNode *root=new TreeNode(preorder[idx++]);
        if(start==end)return root;
        int i=start;
        while(i<=end&&postorder[i]!=preorder[idx])i++;
        if(i<=end){
            root->left=constructBST(preorder,postorder,idx,start,i);
            root->right=constructBST(preorder,postorder,idx,i+1,end-1);
        }
        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int idx=0;
        return constructBST(preorder,postorder,idx,0,postorder.size()-1);
    }
};
