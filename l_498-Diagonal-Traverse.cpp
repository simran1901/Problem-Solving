// https://leetcode.com/problems/diagonal-traverse/description/?envType=daily-question&envId=2025-08-25

class Solution {
    bool isValid(int r, int c, int m, int n) {
        return r>=0 && c>=0 && r<m && c<n;
    }
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        // iterate till row becomes 0 or col reaches end
        int m = mat.size(), n = mat[0].size(), idx = 0;
        vector<int> ans(m*n);
        bool reverse = true;
        int r=0, c=0;

        while (r >= 0 && c >= 0 && r < m && c < n) {
            if (reverse) {
                while(r>=0 && c < n) {
                    ans[idx++] = mat[r--][c++];
                }
                // since it is reverse, we will prioritise c
                r++; 
                c--;
                if (isValid(r, c+1, m, n)) {
                    c++;
                }
                else {
                    r++;
                }
            }
            else {
                while(c>=0 && r<m) {
                    ans[idx++] = mat[r++][c--];
                }
                r--;
                c++;
                if (isValid(r+1, c, m, n)) {
                    r++;
                }
                else {
                    c++;
                }
            }
            reverse = !reverse;
        }
        return ans;
    }
};
