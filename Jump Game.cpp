class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int reachable=0,i,sz = nums.size();
        
        for(i=0;i<sz;i++){
            
            if(i<=reachable){
                reachable = max(reachable,i+nums[i]);
            }
            
        }
        
        return reachable>=sz-1;
    }
};