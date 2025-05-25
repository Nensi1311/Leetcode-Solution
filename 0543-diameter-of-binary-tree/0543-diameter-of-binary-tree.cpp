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
    int count = 0;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int l = height(root->left);
        int h = height(root->right);

        count = max(count, l + h);
        return 1 + max(l, h);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return count;
    }
};