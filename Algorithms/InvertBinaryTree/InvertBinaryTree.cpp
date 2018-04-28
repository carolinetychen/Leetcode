// *************************************************
// Leetcode Solution
// Author: Caroline Chen
// *************************************************
// Invert a binary tree.
//      4
//    /   \
//   2     7
//  / \   / \
// 1   3 6   9
// to 
//      4
//    /   \
//   7     2
//  / \   / \
// 9   6 3   1

// Time complexity: O(n)
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