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
    void mapping(vector<int>&inorder,map<int,int>&mp,int n){
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
    }
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int &index,int s,int e,int &n,map<int,int>&mp){
        if(s>e||index>=n){
            return nullptr;
        }
        int ele = preorder[index++];
        TreeNode* root = new TreeNode(ele);
        int pos = mp[ele];
        root->left= build (preorder,inorder,index,s,pos-1,n,mp);
        root->right= build(preorder,inorder,index, pos+1,e, n,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n= preorder.size();
        int preorderIndex= 0 ;
        map<int,int> mp;
        mapping(inorder,mp,n);
        return build(preorder,inorder,preorderIndex,0,n-1,n,mp);
    }
};