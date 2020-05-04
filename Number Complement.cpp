class Solution {
public:
    int findComplement(int num) {
        
        int i = 31;
        
       for(i=31;i>0;i--){
           
           if( (num&(1LL<<i))  ) break;
       }
        
        for(;i>=0;i--){
            
            int p= (1LL<<i) ;
            if( (num&p) )
            {  num = (num & ~p )  ;  
            }
            else
            { num = (num|p) ;
            }
                
        }
        
        return num;
    }
};