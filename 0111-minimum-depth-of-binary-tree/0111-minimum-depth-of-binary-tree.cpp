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
    int height(TreeNode* root){
        if(!root){
            return 0;
        }

        if(!root->left){
            return height(root->right) + 1;
        }

        if(!root->right){
            return height(root->left) + 1;
        }
        
        int l = height(root->left);
        int h = height(root->right);

        return min(l, h) + 1;
    }
    int minDepth(TreeNode* root) {
        return height(root);
    }
};