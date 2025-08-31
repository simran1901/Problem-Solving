// https://leetcode.com/problems/valid-sudoku/?envType=daily-question&envId=2025-08-30

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9, vector<bool>(9, false));
        vector<vector<bool>> col(9, vector<bool>(9, false));
        vector<vector<bool>> box(9, vector<bool>(9, false));
        
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] != '.') {
                    int ch = board[r][c] - '1';
                    int b = (r / 3) * 3 + (c / 3);
                    if (row[r][ch] || col[c][ch] || box[b][ch]) {
                        return false;
                    }
                    row[r][ch] = col[c][ch] = box[b][ch] = true;
                }
            }
        }
        return true;
    }
};
