class MyHashSet {
    
        vector<int> hashSet;
public:
    MyHashSet() {
    }
    
    void add(int key) {
        if(contains(key)){
            return ;
        }
        this->hashSet.push_back(key);
    }
    
    void remove(int key) {
        hashSet.erase(
            std::remove(hashSet.begin(), hashSet.end(), key),
            hashSet.end()
        );
    }
    
    bool contains(int key) {
        for(int i: this->hashSet){
            if(i == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */