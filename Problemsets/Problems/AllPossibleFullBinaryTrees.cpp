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
    vector<TreeNode*>f(int l, int r){
        if(l>r)return {nullptr};
        if(l==r)return {new TreeNode()};
        vector<TreeNode*>res;
        for(int i=l+1;i<r;i+=2){
            vector<TreeNode*>left=f(l,i-1);
            vector<TreeNode*>right=f(i+1,r);
            for(auto&l:left){
                for(auto&r:right){
                    TreeNode *root=new TreeNode();
                    root->left=l;
                    root->right=r;
                    res.push_back(root);
                }
            }
        }
        return res;
    }

    vector<TreeNode*> allPossibleFBT(int n) {
        if(!(n&1))return {};
        return f(1,n);
    }
};
