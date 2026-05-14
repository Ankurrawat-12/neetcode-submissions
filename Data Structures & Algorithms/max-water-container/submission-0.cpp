class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int left = 0;
        int right = heights.size() - 1;

        while(left < right){
            int water = (min(heights[left], heights[right]) * (right - left));
            if(water > maxWater){
                maxWater = water;
            }
            if(heights[left] > heights[right]){
                right--;
            }
            else{
                left++;
            }
        }

        return maxWater;
    }
};
