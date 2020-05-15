struct TrieNode{
       struct TrieNode* child[26];
       bool isleaf;
    };

class Trie {
public:
    /** Initialize your data structure here. */
    struct TrieNode * root;
    
    
    Trie() {
        root = getNode();
    }
    
    struct TrieNode* getNode(){
        struct TrieNode* node = new TrieNode;
        for(int i=0;i<26;i++){
            node->child[i] = NULL;
        }
        
        node->isleaf =false;
        return node;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        
        int len = word.length(),i;
        struct TrieNode * crawl = root;
        for(i=0;i<len;i++){
            int index = word[i]-'a';
            if( !crawl->child[index] )
                crawl->child[index] = getNode();
            
            crawl = crawl->child[index];
                      }  
        
        crawl->isleaf = true;
                      
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
         int len = word.length(),i;
         struct TrieNode * crawl = root;
         for(i=0;i<len;i++){
            int index = word[i]-'a';
            if( crawl->child[index] == NULL)
                return false;
            
            crawl = crawl->child[index];
        }  
        
        return crawl->isleaf ;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         int len = prefix.length(),i;
         struct TrieNode * crawl = root;
         for(i=0;i<len;i++){
            int index = prefix[i]-'a';
            if( crawl->child[index] == NULL)
                return false;
            
            crawl = crawl->child[index];
          }  
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */