// https://leetcode.com/problems/sudoku-solver/?envType=daily-question&envId=2025-08-31

class Solution {
    int getBox(int r, int c) { return (r / 3) * 3 + (c / 3); }

    void solve(int idx, vector<vector<char>>& board, vector<int>& row,
               vector<int>& col, vector<int>& box, bool& found,
               vector<pair<int, int>>& empties) {
        if (found) {
            return;
        }
        if (idx == empties.size()) {
            found = true;
            return;
        }
        int r = empties[idx].first, c = empties[idx].second;
        int b = getBox(r, c);
        int used = row[r] | col[c] | box[b];
        for (int d = 0; d < 9; ++d) {
            if ((used >> d) & 1)
                continue;
            board[r][c] = d + '1';
            row[r] |= 1 << d;
            col[c] |= 1 << d;
            box[b] |= 1 << d;
            solve(idx + 1, board, row, col, box, found, empties);
            if (found)
                return;
            board[r][c] = '.';
            row[r] &= ~(1 << d);
            col[c] &= ~(1 << d);
            box[b] &= ~(1 << d);
        }
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<int> row(9), col(9), box(9);
        vector<pair<int, int>> empties;

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    empties.emplace_back(r, c);
                } else {
                    int d = board[r][c] - '1';
                    int b = getBox(r, c);
                    row[r] |= 1 << d;
                    col[c] |= 1 << d;
                    box[b] |= 1 << d;
                }
            }
        }

        // Optional: Sort empties in-place by number of possible candidates
        // (MRV)
        sort(empties.begin(), empties.end(),
             [&](const pair<int, int>& a, const pair<int, int>& b) {
                 int ra = a.first, ca = a.second, ba = getBox(ra, ca);
                 int rb = b.first, cb = b.second, bb = getBox(rb, cb);
                 int used_a = row[ra] | col[ca] | box[ba];
                 int used_b = row[rb] | col[cb] | box[bb];
                 int mrv_a = __builtin_popcount(~used_a & 0x1FF);
                 int mrv_b = __builtin_popcount(~used_b & 0x1FF);
                 return mrv_a < mrv_b;
             });

        bool found = false;
        solve(0, board, row, col, box, found, empties);
    }
};
