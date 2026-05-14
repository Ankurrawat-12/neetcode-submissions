class Solution {
public:
    int trap(vector<int>& heights) {
        int size = heights.size() - 1;
        int maxWater = 0;
        int maxLeft = heights[0];
        int maxRight = heights[size];
        int leftPointer = 0;
        int rightPointer = size;
        bool flag = true;
        while(leftPointer < rightPointer){
            if(flag){
                maxWater += max(0, (min(maxLeft, maxRight) - heights[leftPointer]));
            }
            else{
                maxWater += max(0, (min(maxLeft, maxRight) - heights[rightPointer]));
            }

            if(maxLeft > maxRight){
                rightPointer--;
                flag=false;
                if(heights[rightPointer] > maxRight){
                    maxRight = heights[rightPointer];
                }
            }
            else{
                leftPointer++;
                flag = true;
                if(heights[leftPointer] > maxLeft){
                    maxLeft = heights[leftPointer];
                }
            }
            
        }

        return maxWater;
    }
};
