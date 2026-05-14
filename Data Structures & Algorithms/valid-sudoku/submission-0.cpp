class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row = 0; row < 9; row++){
            unordered_set<char> hash;
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;

                if(hash.count(board[row][col])){
                    return false;
                }
                hash.insert(board[row][col]);
            }
        }


        for(int col = 0; col < 9; col++){
            unordered_set<char> hash;
            for(int row = 0; row < 9; row++){
                if(board[row][col] == '.') continue;

                if(hash.count(board[row][col])){
                    return false;
                }
                hash.insert(board[row][col]);
            }
        }


        

        for (int startRow = 0; startRow < 9; startRow += 3) {
            for (int startCol = 0; startCol < 9; startCol += 3) {
                unordered_set<char> hash;

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char c = board[startRow + i][startCol + j];

                        if (c == '.') continue;

                        if (hash.count(c)) return false;
                        hash.insert(c);
                    }
                }
            }
        }
        return true;
    }
};
