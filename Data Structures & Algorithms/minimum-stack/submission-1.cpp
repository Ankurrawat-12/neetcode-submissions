class MinStack {
public:
    vector<pair<int,int>> storage;

    MinStack() {}

    void push(int val) {
        if (storage.empty()) {
            storage.push_back({val, val});
        } else {
            storage.push_back({val, min(storage.back().second, val)});
        }
    }

    void pop() {
        storage.pop_back();
    }

    int top() {
        return storage.back().first;
    }

    int getMin() {
        return storage.back().second;
    }
};
