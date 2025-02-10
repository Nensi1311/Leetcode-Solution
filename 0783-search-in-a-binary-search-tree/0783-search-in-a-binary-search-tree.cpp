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
    TreeNode* rooted = NULL;
    TreeNode* tree(TreeNode* root, int val){
        if(root == NULL){
            return NULL;
        }

        if(val == root->val){
            rooted = root;
        }

        if(val < root->val){
            root->left = tree(root->left, val);
        }
        else{
            root->right = tree(root->right, val);
        }

    return root;
    }
    TreeNode* searchBST(TreeNode* root, int val) {

        tree(root,val);
        return rooted;
    }
};