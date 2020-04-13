class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       
        unordered_map<int,int> mp;
        int mx=0,i,sz=nums.size(),sum=0;
    
        
        for(i=0;i<sz;i++){
            if(nums[i]==0) sum-=1;
            else sum+=1;
            
            if(mp[sum] != 0){
            //    cout << i << " " << sum << "\n";
                mx= max(mx, i - mp[sum] +1);
            }
            else mp[sum]=i+1;
            
            if(sum ==0) mx=max(mx,i+1);
        }
        
        return mx;
    }
};