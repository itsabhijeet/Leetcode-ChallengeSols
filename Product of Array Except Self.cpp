class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        vector<int> ans(sz,1);
        int i,prefixProduct = 1;
        
        for(i=1;i<sz;i++) {
            prefixProduct *= nums[i-1];
            ans[i]= prefixProduct;
        }
        
        int suffixProduct=1;
        
        for(i=sz-2;i>=0;i--){
            suffixProduct *= nums[i+1];
            ans[i] *= suffixProduct;
        }
        
        return ans;
        
    
    }
};