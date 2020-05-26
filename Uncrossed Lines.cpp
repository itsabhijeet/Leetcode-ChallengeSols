class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int al = A.size(),bl= B.size(),i,j;
        vector< vector<int> > dp(al,vector<int>(bl,-1));
        
        int ans = solve(0,0,A,B,dp);
        return ans;
    }
    
    int solve(int i,int j,vector<int>& A,vector<int>& B,vector< vector<int> >& dp){
        if(i>=A.size() || j>=B.size()) return 0;
        
        if( dp[i][j] !=-1) return dp[i][j];
        
        int mx=0;
        int x,y, al = A.size(), bl=B.size();
        for(x=i;x<al;x++){
            for(y=j;y<bl;y++){
                if(A[x] == B[y] ){
                    mx=max(mx,solve(x+1,y+1,A,B,dp)+1);
                }
            }
        }
        
        return dp[i][j]=mx;
    }
};

// By Recursion and memoization

