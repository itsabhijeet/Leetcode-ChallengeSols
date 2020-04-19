class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int sz = nums.size();
        int lo=0,hi=sz-1,mid,index=-1;
        
        while(lo<=hi){
            
            mid = lo + (hi-lo)/2;
            
            if( nums[mid]< nums[0])
                index=mid,hi=mid-1;
            else
                lo=mid+1;
            
        }
        
        if(index == -1){
            
            lo=0; hi=sz-1;
            while(lo<=hi){
                mid=lo+(hi-lo)/2;
                
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
                
            }
            return -1;
        }
        else{
            if(target >= nums[0]) lo=0,hi=index-1;
            else lo=index,hi=sz-1;
            
            while(lo<=hi){
                mid=lo+(hi-lo)/2;
                
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
                
            }
            return -1;
        
            
        }
        
       
    }
};