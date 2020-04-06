class Solution {
public:
    int numSteps(string s) {
        int l = s.length(),ans=0;
        int i = l-1,j;
        
        while(i>=0){
            
            if(i==0) break;
            
            if(s[i] == '1'){
                
                j=i;
                while(j>=0 && s[j]=='1'){ // Do Binary Addition 
                    s[j]='0';
                    j--;
                }
                
                if(j<0){
                    ans += i+2;  // if "111" --> "1000"  (Directly count steps and break)
                    break;
                }
                else{
                    s[j] = '1';
                    ans += 2;
                    i--;
                }
                
            }
            else 
            {
                ans++; i--;  // In divide by  2 simply remove last bit. 
            }
            
        }
        
        return ans;
        
        
    }
};