// https://leetcode.com/problems/sort-matrix-by-diagonals/?envType=daily-question&envId=2025-08-28

class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        priority_queue<int> mxHeap;
        priority_queue<int, vector<int>, greater<int>> mnHeap;
        int n = grid.size();
        for (int i=1; i<n; i++) {
            int r = 0, c = i;
            while (r<n && c<n) {
                mnHeap.push(grid[r++][c++]);
            }

            r = 0, c = i;
            while (r<n && c<n) {
                grid[r++][c++] = mnHeap.top();
                mnHeap.pop();
            }
        }

        for (int i=0; i<n; i++) {
            int r = i, c = 0;
            while (r<n && c<n) {
                mxHeap.push(grid[r++][c++]);
            }

            r = i, c = 0;
            while (r<n && c<n) {
                grid[r++][c++] = mxHeap.top();
                mxHeap.pop();
            }
        }
        return grid;
    }
};
