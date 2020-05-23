
class Solution {
public:
    
    string frequencySort(string s) {
        int l = s.length(),i;
        set< pair<int,char> > st;
        unordered_map<char,int> mp;
        for(i=0;i<l;i++){
            mp[s[i]]++;
        }
        
        unordered_map<char,int>::iterator it = mp.begin();
        
        for(;it!=mp.end();it++){
            st.insert({it->second,it->first});
        }
        
        string ans="";
        
        set< pair<int,char> >::iterator sit = st.begin();
        
        for(;sit!=st.end();sit++){
            int times = (*sit).first;
            while(times--)
                ans += (*sit).second;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};