class Solution {
public:
    int maxSubArray(vector<int>& a) {
        
        int cur_max=a[0] ,mx=a[0],i,sz = a.size();
        
        for(i=1;i<sz;i++){
            
           cur_max =  max(cur_max+a[i],a[i]);
           mx = max(mx,cur_max);
        }
        
        return mx;
    }
};