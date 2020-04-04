class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int sz = nums.size(),i,j=0,cnt=0;
        
        for(i=0;i<sz;i++){
            
            if(nums[i] == 0) cnt++;
            else{
                nums[j++] = nums[i];
            }
            
        }
        
        j=sz-1;
        while(cnt--)
            nums[j--]=0;
        
    }
};