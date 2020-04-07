class Solution {
public:
    int countElements(vector<int>& a) {
        
        int h[1002]={0},i,sz=a.size();
        
        for(i=0;i<sz;i++){
            h[a[i]]++;
        }
        
        int ans=0;
        
        for(i=0;i<sz;i++){
            if(h[a[i]+1]) ans++;
        }
        
        return ans;
    }
};