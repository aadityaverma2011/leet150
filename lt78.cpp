/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* func(TreeNode* root , TreeNode* p ,TreeNode* q){
        if(root==NULL){
            return nullptr;
        }
        if(root->val==p->val || root->val==q->val){
            return root;
        }
        TreeNode* left= func(root->left,p,q);
        TreeNode* right = func(root->right,p,q);
        if(left!= nullptr && right!=nullptr){
            return root;
        }
        if(left==NULL){
            return right;
        }
        return left;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return func(root,p,q);

    }
};