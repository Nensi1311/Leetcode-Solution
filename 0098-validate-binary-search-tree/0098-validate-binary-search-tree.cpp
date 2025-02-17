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
    vector<int> v;
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        isValidBST(root->left);
        v.push_back(root->val);
        isValidBST(root->right); 

        return is_sorted(v.begin(), v.end()) && adjacent_find(v.begin(), v.end())==v.end();
    }
};