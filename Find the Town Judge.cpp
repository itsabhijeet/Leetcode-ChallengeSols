class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int sz = trust.size(),i;
        
        int trustees[1001]={0};
        int trusts[1001]={0};
        
        for(i=0;i<sz;i++){
            
            trusts[trust[i][0]]++;
            trustees[trust[i][1]]++;
        }
        
        for(i=1;i<=N;i++){
            if(trustees[i] == N-1 && trusts[i]==0) return i;
        }
        
        return -1;
    }
};