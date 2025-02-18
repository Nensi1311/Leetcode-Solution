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
    TreeNode* BST(vector<int> pre, vector<int> in, int &preindex, int left, int right, int n, map<int, int> mapping){
        if(preindex>=n || left>right){
            return NULL;
        }

        int val = pre[preindex++];
        TreeNode* root = new TreeNode(val);
        int position = mapping[val];

        root->left=BST(pre, in, preindex, left, position-1, n, mapping);
        root->right=BST(pre, in, preindex, position+1, right, n, mapping);

        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder;
        inorder = preorder;
        sort(inorder.begin(), inorder.end());
        int n = inorder.size();

        map<int, int> map_index;
        for(int i=0; i<n; i++){
            map_index[inorder[i]] = i;
        }

        int preindex = 0;
        TreeNode* ans = BST(preorder,inorder,preindex,0,n-1,n,map_index);
        return ans;
    }
};