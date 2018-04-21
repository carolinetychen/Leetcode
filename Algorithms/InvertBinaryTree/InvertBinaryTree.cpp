// *************************************************
// Leetcode Solution
// Author: Caroline Chen
// *************************************************
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
        
        TreeNode *tmp = new TreeNode(root->val);
        tmp->left = invertTree(root->right);
        tmp->right = invertTree(root->left);
        
        return tmp;
    }
};