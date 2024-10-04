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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result; 
        if(root==nullptr){
            return result;
        }
        queue<TreeNode*> q; 
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>temp ; 
            while(n--){
                TreeNode* current = q.front();
                q.pop();
                temp.push_back(current->val);
                if(n==0){
                    result.push_back(temp);
                    
                }
                if(current->left!=NULL){
                    q.push(current->left);
                }
                if(current->right!=NULL){
                    q.push(current->right);
                }
            }
        }      
        return result;
    }
};