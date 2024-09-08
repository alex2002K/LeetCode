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
    TreeNode* deleteNode(TreeNode* root, int key) {

        if (root == nullptr) return nullptr;

        if (key < root->val) {
            
            root->left = deleteNode(root->left, key);
        } 
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } 
        else {
            // Node to be deleted found
            if (root->left == nullptr && root->right == nullptr) {
                // Case 1: Node with no children (leaf node)
                delete root;
                return nullptr;
            } 
            else if (root->left == nullptr) {
                // Case 2: Node with only a right child
                TreeNode* temp = root;
                root = root->right;
                delete temp;
            } 
            else if (root->right == nullptr) {
                // Case 3: Node with only a left child
                TreeNode* temp = root;
                root = root->left;
                delete temp;
            } 
            else {
                // Case 4: Node with two children
                TreeNode* temp = findMin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right, temp->val);
            }
        }

        return root;
    }

private:
    // Helper function to find the minimum value node in a tree
    TreeNode* findMin(TreeNode* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }
};
