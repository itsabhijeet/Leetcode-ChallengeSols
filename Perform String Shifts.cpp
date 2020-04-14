class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        int left=0,right=0,sz=shift.size(),l=s.length(),i;
        for(i=0;i<sz;i++){
            if(shift[i][0]==0){
                left += shift[i][1];
            }
            else{
                left -= shift[i][1];
            }
        }
       // cout << left << " " << right ;
        string a="",b="";
        if(left>=0){
            left = left%l;
            for(i=0;i<left;i++) a+= s[i];
            for(;i<l;i++) b+=s[i];
            return b+a;
        }
        else{
            right = (-left)%l;
            for(i=0;i<l-right;i++) a+= s[i];
            for(;i<l;i++) b+=s[i];
            return b+a;
        }
    }
};