class MyHashSet {
public:
    /** Initialize your data structure here. */
    array<vector<int>,10000> arrs;
    MyHashSet() {
        
        
    }
    
    void add(int key) {
        auto res=find(arrs[key%10000+1].begin(), arrs[key%10000+1].end(), key);
        if (res==arrs[key%10000+1].end())  (arrs[key%10000+1]).push_back(key);
        
    }
    
    void remove(int key) {
        auto res=find(arrs[key%10000+1].begin(), arrs[key%10000+1].end(), key);
        if (res==arrs[key%10000+1].end())  return ;
        else
            *res=-1;
        
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        auto res=find(arrs[key%10000+1].begin(), arrs[key%10000+1].end(), key);
        if (res==arrs[key%10000+1].end())  return false;
        else
            return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * bool param_3 = obj.contains(key);
 
 
 
 
 */
