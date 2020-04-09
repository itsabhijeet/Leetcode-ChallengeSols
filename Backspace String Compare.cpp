class Solution {
public:
    bool backspaceCompare(string s, string t) {
       
          string a="",b="";
          int lenS = s.length(),lenT=t.length(),i;
          int cntHash=0;
          
         // For s Starting from last
          i=lenS-1;
          while(i>=0){
              
              if(s[i] == '#') cntHash++;
              else if(cntHash == 0) 
              {
                  a = s[i] + a;
              }
              else cntHash--;
              
              i--;
          }
        
          //For t starting from last
         i=lenT-1; cntHash=0;
         while(i>=0){
             if(t[i]=='#') cntHash++;
             else if(cntHash == 0){
                 b = t[i] + b;
             }
             else cntHash--;
             i--;
         }
        
       // cout << a << " | " << b; 
        
        return a==b;
          
    }
};