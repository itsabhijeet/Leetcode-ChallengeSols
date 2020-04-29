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
    int maxPathSum(TreeNode* root) {
        
        int ans = INT_MIN;
        
        int ret = solve(root,ans);
        
        return ans;
    }
    
    int solve(TreeNode* root,int &ans){
        
        if(root == NULL) return 0;
        
        int left = solve(root->left,ans);
        int right = solve(root->right,ans);
        int cur = root->val;
        ans = max(ans, max(left+cur,right+cur));
        ans = max(ans,left+right+cur);
        ans = max(ans,cur);
        
        return max(cur,max(left+cur,right+cur));
        
        
    }
};