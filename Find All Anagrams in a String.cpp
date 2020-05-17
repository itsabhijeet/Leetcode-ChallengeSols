class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    
        vector<int> ans;
        int slen = s.length();
        int plen = p.length();
        int store[20105][26] = {{0}},i,j;
        int pstore[26]={0};
        
        for(i=0;i<plen;i++) pstore[p[i]-'a']++;
        
        for(i=0;i<slen;i++){
            
             store[i][s[i]-'a']++;
             if(i!=0){
                      for(j=0;j<26;j++) store[i][j] += store[i-1][j]; 
                }
            
            if(i>=plen-1){
                int endHereStore[26]={0};
                
                for(j=0;j<26;j++)
                    endHereStore[j] = store[i][j]- (i-plen>=0 ? store[i-plen][j] : 0); // From i-plen to i
                
                // check with p
                for(j=0;j<26;j++){
                    if(pstore[j]!=endHereStore[j]) break;
                }
                
                if(j==26) ans.push_back(i-plen+1); // ending at i
            }
                
                
            }

        return ans;
        
    }
    

};