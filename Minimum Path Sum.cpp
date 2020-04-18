class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size(),col = grid[0].size();
        vector< vector<int> > dp(2, vector<int>(col+1,0));
        int i,j;
        
        dp[0][0] = grid[0][0];
        for(j=1;j<col;j++) dp[0][j]=dp[0][j-1]+grid[0][j];
        if(row == 1) return dp[0][col-1];
        
       
        for(i=1;i<row;i++){
            
            dp[1][0] = dp[0][0] + grid[i][0];
            dp[0][0] = dp[1][0];
            
            for(j=1;j<col;j++){
                dp[1][j] = min(dp[1][j-1] , dp[0][j]) + grid[i][j];
                dp[0][j] = dp[1][j];
                
                }
        }
        
        return dp[1][col-1];
        
        
    }
};