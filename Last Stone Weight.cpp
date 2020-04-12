class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq; 
        int i=0,sz=stones.size();
        for(i=0;i<sz;i++)pq.push(stones[i]);
        
        while(pq.size()>1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            
            if(y>x)pq.push(y-x);
        }
        
        if(pq.size()) return pq.top();
        
        return 0; 
    }
};