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
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) return 0;
        
        int ans=0;
        int ret = solve(root,ans);
        return ans-1; // Conunted ans = no. of nodes 
        
    }    
    int solve(TreeNode* root, int &ans){
         
        if(root == NULL ) return 0;
        
        int left =  solve(root->left,ans);
        int right = solve(root->right,ans);
        
        ans=max(ans,left+right+1);
        
        return max(left,right)+1;
        
    }
};