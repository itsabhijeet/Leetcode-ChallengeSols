class Solution {
public:
    bool isPerfectSquare(int num) {
        
        return binarySqrt(num);
    }
    
    bool binarySqrt(int num){
        
        int lo=1,hi=num,mid;
        
        while(lo<=hi){
            
            mid= lo+(hi-lo)/2;
            
            if( mid > num*1.0/mid ) hi=mid-1;
            else if(mid < num*1.0/mid ) lo=mid+1;
            else return true;
        }
        
        return false;
    }
};