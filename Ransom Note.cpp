class Solution {
public:
    bool canConstruct(string r, string m) {
        
        int hash[26]={0};
        int i,l=m.length(), rL = r.length();
        for(i=0;i<l;i++) hash[m[i]-'a']++;
        
        for(i=0;i<rL;i++){
            
            if( hash[r[i]-'a'] == 0) return false;
            
            hash[r[i]-'a']--;
        }
        
        return true;
        
        
    }
};