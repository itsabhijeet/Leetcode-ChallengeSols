class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int len1 = s1.length(),len2=s2.length();
        
        if(len1 > len2) return false;
        
        int store[10005][26] = {{0}},i,j;
        int s1store[26]={0};
        
        for(i=0;i<len1;i++) s1store[s1[i]-'a']++;
        
        for(i=0;i<len2;i++){
            
            store[i][s2[i]-'a']++;
            if(i!=0){
                for(j=0;j<26;j++) store[i][j] += store[i-1][j];
            }
            
            if(i>= len1-1){
               
                int endingHere[26]={0};
                
                for(j=0;j<26;j++)
                    endingHere[j] = store[i][j] - (i==len1-1 ? 0 : store[i-len1][j]);
                
                for(j=0;j<26;j++)
                    if(endingHere[j]!=s1store[j]) break;
                
                if(j==26) return true;
            }
        }
        
        return false;
        
    }
};