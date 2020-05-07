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
    bool isCousins(TreeNode* root, int x, int y) {
        
        int lx,ly,px=-1,py=-1;
        
        solve(root,x,y,lx,ly,px,py,0,-1);
        
        return lx==ly && px!=py;
    }
    
    void solve(TreeNode* root,int& x,int& y,int& lx,int& ly,int& px, int& py,int level,int parent){
        
        if(root == NULL) return;
        
        if(px!=-1 && py!=-1) return; // Both already found
        
        if(root->val == x){
            lx = level;
            px = parent;
        }
        
        if(root->val == y){
            ly = level;
            py = parent;
        }
        
        solve(root->left,x,y,lx,ly,px,py,level+1,root->val);
        
        solve(root->right,x,y,lx,ly,px,py,level+1,root->val);
    }
};