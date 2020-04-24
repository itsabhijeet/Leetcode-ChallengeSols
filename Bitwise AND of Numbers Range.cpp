class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(!m || !n ) return 0;
        
        if(m==n) return m;
        
        int ans=0;
        
        while(1 && m && n){
            
            long long p = 1;
            
            while(p*2LL <=m) p=p*2LL;
            
            if(p*2<=n) break;
            
            ans+=p;
            
            m = m-p;
            n=n-p;
        }
        
        return ans;
    }
};