class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue< pair<int,int> > pq; // store -ve for min pq
        int sz = points.size(),i;
        
        for(i=0;i<sz;i++){
            int x = points[i][0];
            int y = points[i][1];
            pq.push({-(x*x+y*y), i});
        }
        vector< vector<int> > ans;
        
        while(K--){
            int idx = pq.top().second;
            pq.pop();
            
            ans.push_back(points[idx]);
        }
        
        return ans;
        
    }
};