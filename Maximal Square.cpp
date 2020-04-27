class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int row = matrix.size();
        if(row==0) return 0;
        int col = matrix[0].size(),i,j;
        int ans=0;
        vector< vector<int> > dp(row, vector<int>(col,0));
        
        for(j=0;j<col;j++) dp[0][j]=matrix[0][j]=='0'?0:1,ans=max(ans,dp[0][j]);
        
        for(i=0;i<row;i++) dp[i][0]=matrix[i][0]=='0'?0:1,ans=max(ans,dp[i][0]);
        
        for(i=1;i<row;i++){
            
            for(j=1;j<col;j++){
                
                if(matrix[i][j]=='1')
                {
                    dp[i][j] = min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) + 1;
                    ans = max(ans,dp[i][j]);
                 
                }
            }
        }
        
        return ans*ans;
        
        
    }
};