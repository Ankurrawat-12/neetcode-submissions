class Solution {
public:
    int trap(vector<int>& heights) {
        vector<int> leftMax(heights.size(), heights[0]);
        vector<int> rightMax(heights.size(), heights[heights.size() - 1]);

        int maxWater = 0;

        for(int i = 1; i < heights.size(); i++){
            if(heights[i] > leftMax[i-1]){
                leftMax[i] = heights[i];
            }
            else{
                leftMax[i] = leftMax[i-1];
            }
        }


        for(int i = heights.size() - 2; i >= 0; i--){
            if(heights[i] > rightMax[i+1]){
                rightMax[i] = heights[i];
            }
            else{
                rightMax[i] = rightMax[i+1];
            }
        }

        for(int i = 0; i < heights.size(); i++){
            maxWater += min(leftMax[i], rightMax[i]) - heights[i];
        }
        return maxWater;

    }
};
