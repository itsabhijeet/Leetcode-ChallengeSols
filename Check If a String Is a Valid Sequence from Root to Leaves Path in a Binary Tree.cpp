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
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        
        return solve(root,0,arr,arr.size());
    
    }
    
     bool solve(TreeNode* root,int cur, vector<int>&arr,int sz){
         if(cur == arr.size()) return false;
         
         if(root == NULL) return false;
         
          if(cur==sz-1 && root->val== arr[cur] && root->left==NULL && root->right==NULL )
              return true;
         
         if(root->val== arr[cur])
             return solve(root->left,cur+1,arr,sz) || solve(root->right,cur+1,arr,sz);
         else 
             return false;
            
         } 
    
};