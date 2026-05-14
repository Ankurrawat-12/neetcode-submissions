class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if((target < matrix[0][0]) || target > matrix[matrix.size() - 1][matrix[0].size() - 1]){
            return false;
        }
        int start = 0;
        int end = matrix[0].size() - 1;
        int mid = 0;
        int row = 0;

        for(int i = 1; i < matrix.size(); i++){
            if(matrix[i][0] > target){
                row = i - 1;
                break;
            }
            if(i == matrix.size() - 1){
                row  = i;
            }
        }

        while(start <= end){
            mid = (end - start)/2 + start;

            if(matrix[row][mid] == target) return true;
            else if(matrix[row][mid] > target) end = mid - 1;
            else start = mid + 1;
        }

        return false;
    }
};
