#include <string>
#include <vector>
#include <cctype>

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
    TreeNode* recoverFromPreorder(string traversal) {
        TreeNode *root = nullptr;
        vector<pair<TreeNode*, int>> st;
        int dash = 0, n = traversal.size();
        for (int i = 0; i < n; i++) {
            int val = 0;
            while (i < n && isdigit(traversal[i])) {
                val = val*10+(traversal[i]-'0');
                i++;
            }

            TreeNode *node = new TreeNode(val);
            if (dash == 0) root = node;
            else {
                while (st.back().second != dash-1) st.pop_back();
                if (st.back().first->left == nullptr) st.back().first->left = node;
                else st.back().first->right = node;
            }

            st.emplace_back(node, dash);
            dash = 0;

            while (i < n && traversal[i] == '-') {
                dash++;
                i++;
            }
            i--; 
        }

        return root;
    }
};
