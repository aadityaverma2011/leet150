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
    TreeNode* pre(TreeNode* root , queue<TreeNode*>&q){
        if(root==NULL){
           return nullptr;
        }
        q.push(root);
        pre(root->left,q);
        pre(root->right,q);

        return root;
    }
    void flatten(TreeNode* root) {
      
        queue<TreeNode*> q;
        pre(root,q);
        while(!q.empty()){
            TreeNode* node= q.front();
            q.pop();
            if(!q.empty()){
                node->right=q.front();
                node->left=nullptr;
            }else{
                node->left=nullptr;
                node->right=nullptr;
            }
        }
    
    }
    
};