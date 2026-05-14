class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        stack<pair<int, int>> fleets;

        for(int i = 0; i < speed.size(); i++){
            cars.push_back(pair(position[i], speed[i]));
        }

        sort(cars.begin(), cars.end(), greater<pair<int,int>>());
        

        for(int i = 0; i < cars.size(); i++){
            if(fleets.empty()){            
                fleets.push(cars[i]);
            }
            else{
                pair<int, int> car = fleets.top();
                double time1 = (double)(target - car.first) / car.second;
                double time2 = (double)(target - cars[i].first) / cars[i].second;

                if(time1 >= time2){
                    continue;
                }
                else{
                    fleets.push(cars[i]);
                }
            }
        }
        return fleets.size();
    }
};
