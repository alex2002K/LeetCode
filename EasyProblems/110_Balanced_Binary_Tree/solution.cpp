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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;
        
        int leftHeight = countHeight(root->left);
        int rightHeight = countHeight(root->right);
        
        if (std::abs(leftHeight - rightHeight) > 1)
            return false;
        
        return isBalanced(root->left) && isBalanced(root->right);
    }   

    int countHeight(TreeNode* root)
    {
        
        if (root == nullptr)
            return 0;
        else {
        
        int left = countHeight(root->left);
        int right = countHeight(root->right);
        
        if (left >= right)
            return left + 1;
        else
            return right + 1;
        }
    }
    
};
