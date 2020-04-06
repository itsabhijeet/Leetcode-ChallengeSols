class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector< pair<string,int> > a;
        
        int l = s.size(),i;
        for(i=0;i<l;i++){
            
            string temp = s[i];
            sort(temp.begin(),temp.end());
            a.push_back({temp,i});
        }
        
        sort(a.begin(),a.end());
        
        vector< vector<string> > ans;
        vector<string> t; 
        t.push_back(s[a[0].second]);
        for(i=1;i<l;i++){
            
            if(a[i].first == a[i-1].first){
                t.push_back(s[a[i].second]);
            }
            else{
                ans.push_back(t);
                t.clear();
                t.push_back(s[a[i].second]);
            }
        }
        ans.push_back(t);
        return ans;
    }
};

// Hashing can be used for better efficiency