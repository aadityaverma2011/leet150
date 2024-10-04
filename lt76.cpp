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
    void preorder(TreeNode* root, int num, vector<int>&result){
        if(root==nullptr){
            num=0;
            result.push_back(num);
        }else{
        num=(num*10)+root->val;
        
        if(root->left==nullptr && root->right==nullptr){
            result.push_back(num);
        }
        preorder(root->left,num,result);
        preorder(root->right,num,result);
        }

    }
    int sumNumbers(TreeNode* root) {
        int num =0 ;
        vector<int> result; 
        preorder(root,num, result);
        int sum = 0 ;
        for(int i:result){
            sum+=i;
        }

        return sum;
    }
};