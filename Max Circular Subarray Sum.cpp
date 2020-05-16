class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        int sz = A.size();
        int i;
        int max_cur_sum=A[0],max_sum=A[0],min_sum=A[0],min_cur_sum=A[0];
        int sumTotal=A[0];
        
        for(i=1;i<sz;i++){
            
            max_cur_sum = max(max_cur_sum+A[i],A[i]);
            max_sum = max(max_sum,max_cur_sum);
            
            min_cur_sum = min(min_cur_sum+A[i],A[i]);
            min_sum = min(min_sum, min_cur_sum);
            
            sumTotal += A[i];
        }
   //     cout << max_sum << " " << min_sum << " " << sumTotal ;
        if(max_sum < 0 ){
            //All Negative Case
            return max_sum;
        }
        // sumTotal - min_sum (covers wraaped circular part)
        return max(max_sum,sumTotal-min_sum);
    }
    
};