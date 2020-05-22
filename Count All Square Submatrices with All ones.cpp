class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        if(!row) return 0;
        int col = matrix[0].size(),i,j;
        int dp[305][305] = {{0}};
        int ans=0;
        for(j=0;j<col;j++) { dp[0][j] = matrix[0][j]; if(matrix[0][j]) ans++;}
        for(i=1;i<row;i++) { dp[i][0] = matrix[i][0]; if(matrix[i][0]) ans++; }
        
        for(i=1;i<row;i++){
            for(j=1;j<col;j++){
                
                if(matrix[i][j]){
                    
                dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j])) + 1;
                ans+= dp[i][j];
             //   cout << dp[i][j]  << " | ";
                }
               
                
            }
           
        }
        
        return ans;
        
    }
};