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
    int i=0;
    int ans=0;
    void inorder(TreeNode* root , int k){
        if(root->left!=NULL){
            inorder(root->left,k);
        }
        i++;
        if(i==k){
            ans= root->val;
            return;
        }
        if(root->right!=NULL){
            inorder(root->right,k);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
};