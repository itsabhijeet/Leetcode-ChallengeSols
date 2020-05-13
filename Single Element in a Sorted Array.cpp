class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     
        int sz = nums.size();
        if(sz == 1) return nums[0];
        int lo=0;
        int hi = sz-1;
        int mid,ans;
        
     
        while(lo<=hi){
            
            mid = lo+(hi-lo)/2;
            
          //  cout << mid << "| " <<  nums[mid] << nums[mid-1] << nums[mid+1]; 
            
            
            if( (mid==0 && nums[mid]!=nums[mid+1]) || (mid==sz-1 && nums[mid]!= nums[mid-1]) )
            { 
                ans = nums[mid];
                break;
            }
            else if(  (nums[mid]>nums[mid-1]) && (nums[mid]<nums[mid+1]) ){
               // cout << "hetrer";
                ans = nums[mid];
                break;
            }           
            
         //   cout << "tewp | ";
            
            if((mid%2) == 1){
                if(nums[mid]!=nums[mid-1])hi=mid-1;
                else lo=mid+1;
            }
            else{
              //  cout << "LASt EVEN CONDiton ";
                if(nums[mid]!=nums[mid+1])hi=mid-1;
                else lo=mid+1;
            }
            
        }
        
        return ans;
        
    }
};