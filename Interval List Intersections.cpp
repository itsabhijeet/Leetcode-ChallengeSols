class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector< vector<int> > ans;
        int alen=A.size(),blen=B.size(),i=0,j=0;
        
        while(i<alen && j<blen){
            
           vector<int>  ints = intersection(A[i],B[j]);
            if( ints[1] >= ints[0]){
              ans.push_back(ints);
            } 
            
             int first = comesFirst(A[i],B[j]);
             if(first == 0) i++;
             else j++;
            
        }
        return ans;
        
    }
    
    vector<int> intersection(vector<int> a,vector<int> b){
        vector<int> ans;
        
        ans.push_back(max(a[0],b[0]));
        ans.push_back(min(a[1],b[1]));
        
        return ans;
    }
    
    int comesFirst(vector<int> a,vector<int> b){
        if(a[1] < b[1]) return 0; 
        return 1;
    }

};