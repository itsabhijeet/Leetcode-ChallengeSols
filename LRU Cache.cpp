class LRUCache {
public:
    int size;
    map<int,int> mp;
    set< pair<int,int> > use;
    int counter;
     
    LRUCache(int capacity) {
       size = capacity;
       counter = INT_MIN;
    }
    
    int get(int key) {
        
        if(mp.find(key) == mp.end()) return -1;
        else{
             set< pair<int,int> >::iterator it = use.begin();
             int found = 0;
            for(;it!=use.end();it++){
                if( (*it).second == key){
                    found=1;
                    break;
                }
            }
            
            if(found  == 1){
                use.erase(it);
            }
            
            use.insert({++counter,key});
            
            return mp[key];
            
        }
        
    }
    
    void put(int key, int value) {
        
        
        
        if(mp.find(key) != mp.end()){
            cout << "Here : ["  << key << " " << value << "] " ;
            mp[key] = value;
            set< pair<int,int> >::iterator it = use.begin();
            int found = 0;
            for(;it!=use.end();it++){
                if( (*it).second == key){
                    found=1;
                    break;
                }
            }
            
            if(found  == 1){
                use.erase(it);
            }
            
            use.insert({++counter,key});
            
        }else{
            
            if(size == 0){
                 set< pair<int,int> >::iterator it = use.begin();
             //    cout << "Evict : " << (*it).second;
                 mp.erase((*it).second);
                 use.erase(it);
            }
            
                 mp[key] = value;
                 use.insert({++counter,key});
                 if(size) size--;
    
        }  
        
    }
       
        
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */