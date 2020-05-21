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
    int kthSmallest(TreeNode* root, int k) {
        
        int ans;
        solve(root,ans,k);
        return ans;
        
    }
    
    void solve(TreeNode*root,int &ans,int &k){
        
        if(root==NULL || k==0) return;
        
        solve(root->left,ans,k);
      //  cout << k << " " << root->val << "\n";
        k--;
        if(k==0) {ans= root->val; return;}
        
        solve(root->right,ans,k);
    }
    
    
};