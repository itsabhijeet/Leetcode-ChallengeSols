class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.length(),n= text2.length(),i,j;
        
        //vector< vector<int> > dp(m+1, vector<int>(n+1,0));
        
        int dp[1001][1001] = {{0}};
        
        for(i=0;i<m;i++){
            
            for(j=0;j<n;j++){
                // 1-indexing so dp[i+1][j+1]
                if(text1[i] == text2[j]) dp[i+1][j+1] = dp[i][j]+1;
                else{
                    dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
                }
            }
        }
        
        return dp[m][n];
        
        
    }
};