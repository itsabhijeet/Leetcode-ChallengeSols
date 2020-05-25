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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
         
        TreeNode * root = solve(0,preorder.size()-1,preorder);
        return root;
    }
    
    TreeNode* solve(int l,int r,vector<int> &preorder){
        
        if(l>r) return NULL;
        
        TreeNode * root = new TreeNode(preorder[l]);
        int i=l+1;
        
        while(i<=r && preorder[i]< preorder[l]) i++;
        
        root->left = solve(l+1,i-1,preorder);
        root->right = solve(i,r,preorder);
        
        return root;
        
        
    }
};