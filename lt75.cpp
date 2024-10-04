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
    bool preorder(TreeNode* root,int targetsum, int sum){
        if(root==NULL){
            return false;
        }
        sum=sum+root->val;
        if(root->left==NULL && root->right==NULL){
            return sum == targetsum;
        }
        return preorder(root->left, targetsum, sum) || preorder(root->right, targetsum, sum);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0 ; 
        return preorder(root,targetSum,sum);
    }
};