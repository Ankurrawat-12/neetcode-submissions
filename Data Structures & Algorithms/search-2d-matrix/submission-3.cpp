class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if((target < matrix[0][0]) || target > matrix[matrix.size() - 1][matrix[0].size() - 1]){
            return false;
        }
        int start = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int end = (m * n) - 1;
        int mid;
        int row;
        int col;

        while(start <= end){
            mid = (end - start)/2 + start;
            row = mid / n;
            col = mid % n;

            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) end = mid - 1;
            else start = mid + 1;
        }

        return false;
    }
};
