#include <iostream>
#include <vector>
#include <stack>
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (!root) return res;
        TreeNode* node = root;
        stack<TreeNode*> nodes;
        while (node || !nodes.empty())
        {
            if (node) {
                nodes.push(node);
                node = node->left;
            } else {
                TreeNode* popNode = nodes.top();
                nodes.pop();
                res.push_back(popNode->val);
                node = popNode->right;
            }
        }
        
        return res;
    }
};
