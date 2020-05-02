class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_map<char,int> mp;
        int Jlen = J.length(),i,j;
        
        for(i=0;i<Jlen;i++) mp[J[i]]=1;
        int ans=0;
        int Slen = S.length();
        for(i=0;i<Slen;i++){
            if(mp[S[i]]) ans++;
        }
        
        return ans;
    }
};