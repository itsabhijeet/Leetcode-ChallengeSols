class Solution {
public:
    bool isHappy(int n) {
        
        int h[1300]={0};
        
        h[1]=1; h[7]=1; h[10]=1;
        
        for(int i=11;i<1300;i++){
            
            int sumofsquares=i; //initially
            do{
                int j=sumofsquares;
                int newSs = 0;
                while(j!=0){
                    newSs += (j%10) *(j%10);
                    j=j/10;
                }
                
                sumofsquares = newSs;
            }
            while( sumofsquares > i);
            
            h[i] = h[sumofsquares];
        }
        
        
        int sum=0;
        
        while(n!=0){
            sum += (n%10) *( n%10);
            n=n/10;
        }
        
        return h[sum]==1; 
    }
};