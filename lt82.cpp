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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool left=true;
        while(!q.empty()){
            int n=q.size();
            vector<int>temp;
            
            while(n--){
                TreeNode* current= q.front();
                temp.push_back(current->val);
                q.pop();
                if(n==0 && left==true){
                    result.push_back(temp);
                    left=false;

                }else if(n==0 && left==false){
                    reverse(temp.begin(),temp.end());
                    result.push_back(temp);
                    left=true;
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