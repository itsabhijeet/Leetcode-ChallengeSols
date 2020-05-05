class Solution {
public:
    int firstUniqChar(string s) {
        
        
        int hash[26]={0};
        int i,l = s.length();
        
        if(l==0) return -1;
       
        for(i=0;i<l;i++) hash[s[i]-'a']++;
        
        for(i=0;i<l;i++) if( hash[s[i]-'a']==1) return i;
        
        return -1;
        
    }
};