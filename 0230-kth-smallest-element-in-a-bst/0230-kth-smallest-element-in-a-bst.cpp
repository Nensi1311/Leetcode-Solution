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
    void minvalue(TreeNode* root){
        if(root == NULL){
            return ;
        }
        minvalue(root->left);
        v.push_back(root->val);
        minvalue(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL){
            return NULL;
        }
        minvalue(root);
        // sort(v.begin(),v.end());
        return v[k-1];
    }
};