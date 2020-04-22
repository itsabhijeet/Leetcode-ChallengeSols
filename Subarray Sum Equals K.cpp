class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        int sum=0,i=0,sz = nums.size(),ans=0;
        
        for(i=0;i<sz;i++){
            
            sum+= nums[i];
            
            if(sum == k) ans++;
            
            ans+= mp[sum-k];
            mp[sum]++;
        }
        
        return ans;
        
        
        
        
    }
};