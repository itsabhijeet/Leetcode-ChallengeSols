class Solution {
public:
    bool checkValidString(string s) {
        int l = s.length(),i,j;
        vector<int> stars;
        
        for(i=0;i<l;i++){
            if(s[i] == '*') stars.push_back(i);
        }
        
        stack< pair<char,int> > stk;
        
        for(i=0;i<l;i++){
            
            if(s[i] == ')'){
                if(stk.empty()){
                    
                  for(j=0;j<stars.size();j++){
                      
                      if(stars[j]>=0 && stars[j] < i) {
                         // cout << "- " << stars[j] << " ";
                          stars[j] = -143; // To mark it used
                          break;
                      }
                  }
                    
                    
                    if(j == stars.size())
                    return false;
                }
                else stk.pop();
            }
            else if(s[i] == '(' ) {
                 
                stk.push({'(',i});
            }
        }
        
        if(!stk.empty()){
            while(!stk.empty()){
                   int index = stk.top().second; 
                   stk.pop();
                   for(j=0;j<stars.size();j++){
                       if(stars[j]>=0 && stars[j] > index){
                           stars[j] = -143;  // To mark it used
                           break;
                       }
                   }
                if(j==stars.size())
                return false;
            }
        }
        
        return true;
    }
};