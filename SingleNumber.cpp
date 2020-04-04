class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int i=0,sz=nums.size();
        
        int ans=nums[0];
        
        for(i=1;i<sz;i++){
            ans= (ans^nums[i]);
        }
        return ans;
        
        
    }
};