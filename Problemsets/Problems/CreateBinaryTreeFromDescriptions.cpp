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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        TreeNode*mp[100001]={};
        bool child[100001]={};
        for(auto&d:descriptions){
            if(mp[d[0]]==nullptr)mp[d[0]]=new TreeNode(d[0]);
            TreeNode*node=(mp[d[1]]==nullptr?new TreeNode(d[1]):mp[d[1]]);
            if(d[2]==1)mp[d[0]]->left=node;
            else mp[d[0]]->right=node;
            mp[node->val]=node;
            child[d[1]]=true;
        }
        for(auto&d:descriptions){
            if(!child[d[0]])return mp[d[0]];
        }
        return nullptr;
    }
};
