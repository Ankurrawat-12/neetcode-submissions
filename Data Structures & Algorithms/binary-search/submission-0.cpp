class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid = 0;

        while(left <= right){
            mid = ((right - left) / 2) + left;

            if(nums[mid] == target){
                return mid;
            }
            else if (target > nums[mid]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return -1;
    }
};
