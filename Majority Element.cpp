class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int maj; 
        int cnt=0,sz = nums.size();
        
        for(int i=0;i<sz;i++){
            
            if(cnt == 0) maj = nums[i];
            
            if(nums[i] == maj) cnt++;
            else cnt--;
        }
        
        return maj;
        
        
    }
};