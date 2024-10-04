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
    void traverse(TreeNode* root , vector<double>&result){
        if(root==nullptr){

        }else{
            queue<TreeNode*> q;
            q.push(root);
            
            while(!q.empty()){
                double n= q.size();
                double l=n;
                double sum = 0 ; 
                while(n--){
                    TreeNode* current = q.front();
                    q.pop();
                    sum+=current->val;
                    if(n==0){
                        result.push_back(sum/l);
                    }
                    if(current->left!=NULL){
                        q.push(current->left);
                    }
                    if(current->right!=NULL){
                        q.push(current->right);
                    }
                }
            }
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        traverse(root,result);
        return result;
    }
};