class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        priority_queue<pair<int, int>> pq;

        for(int i: nums){
            freq[i]++;
        }

        for (auto &p : freq) {
            pq.push({p.second, p.first});
        }
        
        return pq.top().second;
    }
};