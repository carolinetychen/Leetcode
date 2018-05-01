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
// Recursive
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
        
        TreeNode *tmp = new TreeNode(root->val);
        // Invert the sub-tree of the child on the right
        tmp->left = invertTree(root->right);
        // Invert the sub-tree of the child on the left
        tmp->right = invertTree(root->left);
        
        return tmp;
    }
};