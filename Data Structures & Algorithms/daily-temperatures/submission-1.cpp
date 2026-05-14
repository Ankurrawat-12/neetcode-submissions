class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> output( temperatures.size(), 0);
        stack<pair<int,int>> storage;

        for(int i = 0; i < temperatures.size(); i++){
            if(storage.empty()){
                storage.push(pair(temperatures[i], i));
            }
            else{
                if(storage.top().first > temperatures[i]) storage.push(pair(temperatures[i], i));
                
                else{
                    while(!storage.empty() && storage.top().first < temperatures[i]){
                        int index = storage.top().second;
                        cout<<storage.top().first<<" "<<storage.top().second<<endl;
                        output[index] = i - index;
                        storage.pop();
                    }
                    storage.push(pair(temperatures[i], i));
                }
            }
        }

        return output;
    }
};
