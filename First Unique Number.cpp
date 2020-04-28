class FirstUnique {

private:
     unordered_map<int,int> mp;
     queue<int> q;
    

public:
    
  
    FirstUnique(vector<int>& nums) {
       int sz = nums.size();
       for(int i=0;i<sz;i++) {
           mp[nums[i]]++;
           q.push(nums[i]);
       } 
    }
    
    int showFirstUnique() {
        
        while(!q.empty() && mp[q.front()] > 1){
            q.pop();
        }
        
        if(!q.empty()) return q.front();
        
        return -1;
    }
    
    void add(int value) {
        if(++mp[value] == 1) q.push(value);
        
    
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */