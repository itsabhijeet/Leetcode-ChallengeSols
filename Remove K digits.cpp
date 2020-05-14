class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(num.length() == 0) return num;
        
        stack<char> s;
        int len = num.length(),i;
        s.push(num[0]);
        
        for(i=1;i<len;i++){
            
            char atTop = s.top();
           
                while(k && !s.empty() && s.top() > num[i]){
                    s.pop();
                    k--;
                }
                
                s.push(num[i]);
            
            //cout << "Here in Loop\n";
        }
        
      
        
        while(k--) s.pop();
        
        
        if(s.empty()) return "0";
        
        string ans = "";
      
        while(!s.empty()){
            ans = s.top() + ans;
            s.pop();
            //cout << "Making sTring\n";
        }
       // cout << ans ;
        
      
        int index=0;
        
        while(index<ans.length() && ans[index] == '0') index++;
        
        if(index == ans.length()) return "0";
        ans = ans.substr(index); 
        return ans;
        
    }
};