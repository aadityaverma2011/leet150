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
    void inordertraversal(TreeNode* root, vector<int>&nums){
        if(root->left!=NULL){
            inordertraversal(root->left,nums);
        }
        nums.push_back(root->val);
        if(root->right!=NULL){
            inordertraversal(root->right,nums);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> nums ; 
        int minD= INT_MAX;
        inordertraversal(root,nums);
        for(int i=1; i<nums.size();i++){
            int diff= abs(nums[i]-nums[i-1]);
            minD= min(diff,minD);
        }

    return minD;

    }
};