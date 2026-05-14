class MinStack {
public:
    vector<pair<int, int>> storage;
    int size = 0;

    MinStack() {
    }
    
    void push(int val) {
        if(size == 0){
            storage.push_back(pair(val,val));
            size++;
        }
        else{
            storage.push_back(pair(val,  min(storage[size-1].second, val)));
            size++;
        }
    }
    
    void pop() {
        if(size == 0){
            return;
        }
        else{
            size--;
            storage.pop_back();
        }
    }
    
    int top() {
        if(size == 0){
            return 0;
        }
        else{
            return storage[size-1].first;
        }
    }
    
    int getMin() {
        if(size == 0){
            return 0;
        }
        else{
            return storage[size-1].second;
        }
    }
};
