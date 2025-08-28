// https://leetcode.com/problems/length-of-longest-v-shaped-diagonal-segment/description/?envType=daily-question&envId=2025-08-27

class Solution {
    const int D = 4;
    vector<pair<int, int>> dirs = {{1, -1}, {1, 1}, {-1, -1}, {-1, 1}};
    vector<int> cw = {2, 0, 3, 1};
    vector<int> ccw = {1, 3, 0, 2};

    using DP3D = vector<vector<vector<int>>>;

    DP3D make3D(int m, int n, int def = 0) {
        return DP3D(m, vector<vector<int>>(n, vector<int>(D, def)));
    }

    // Returns a vector of (i, j) in the correct sweep order for direction d
    vector<pair<int, int>> getSweepOrder(int d, int m, int n) {
        vector<pair<int, int>> order;
        int si, ei, stepi, sj, ej, stepj;
        if (d == 0) { // ↙
            si = 0; ei = m; stepi = 1;
            sj = n - 1; ej = -1; stepj = -1;
        } else if (d == 1) { // ↘
            si = 0; ei = m; stepi = 1;
            sj = 0; ej = n; stepj = 1;
        } else if (d == 2) { // ↖
            si = m - 1; ei = -1; stepi = -1;
            sj = n - 1; ej = -1; stepj = -1;
        } else { // d == 3, ↗
            si = m - 1; ei = -1; stepi = -1;
            sj = 0; ej = n; stepj = 1;
        }
        for (int i = si; i != ei; i += stepi)
            for (int j = sj; j != ej; j += stepj)
                order.emplace_back(i, j);
        return order;
    }

    void buildStraightChains(const vector<vector<int>>& grid, DP3D& dp1_0,
                             DP3D& dp2_0, DP3D& dp0_0, int& ans) {
        int m = grid.size(), n = grid[0].size();
        for (int d = 0; d < D; ++d) {
            int di = dirs[d].first, dj = dirs[d].second;
            auto order = getSweepOrder(d, m, n);
            for (auto [i, j] : order) {
                int v = grid[i][j];
                if (v == 1) {
                    dp1_0[i][j][d] = 1;
                    ans = max(ans, 1);
                }
                int pi = i - di, pj = j - dj;
                if (pi < 0 || pi >= m || pj < 0 || pj >= n)
                    continue;
                if (v == 2) {
                    int best = 0;
                    if (grid[pi][pj] == 1 && dp1_0[pi][pj][d] > 0)
                        best = max(best, dp1_0[pi][pj][d] + 1);
                    if (grid[pi][pj] == 0 && dp0_0[pi][pj][d] > 0)
                        best = max(best, dp0_0[pi][pj][d] + 1);
                    dp2_0[i][j][d] = max(dp2_0[i][j][d], best);
                    ans = max(ans, dp2_0[i][j][d]);
                } else if (v == 0) {
                    if (grid[pi][pj] == 2 && dp2_0[pi][pj][d] > 0) {
                        dp0_0[i][j][d] =
                            max(dp0_0[i][j][d], dp2_0[pi][pj][d] + 1);
                        ans = max(ans, dp0_0[i][j][d]);
                    }
                }
            }
        }
    }

    void buildTurnChains(const vector<vector<int>>& grid, const DP3D& dp1_0,
                         const DP3D& dp2_0, const DP3D& dp0_0, DP3D& dp2_1,
                         DP3D& dp0_1, int& ans) {
        int m = grid.size(), n = grid[0].size();
        for (int d = 0; d < D; ++d) {
            int di = dirs[d].first, dj = dirs[d].second;
            int pd = ccw[d];
            auto order = getSweepOrder(d, m, n);
            for (auto [i, j] : order) {
                int v = grid[i][j];
                int pi = i - di, pj = j - dj;
                if (pi < 0 || pi >= m || pj < 0 || pj >= n)
                    continue;
                // (1) Straight extension after a turn
                if (v == 2 && dp0_1[pi][pj][d] > 0)
                    dp2_1[i][j][d] = max(dp2_1[i][j][d], dp0_1[pi][pj][d] + 1);
                else if (v == 0 && dp2_1[pi][pj][d] > 0)
                    dp0_1[i][j][d] = max(dp0_1[i][j][d], dp2_1[pi][pj][d] + 1);
                // (2) Introduce a single clockwise turn
                if (v == 2) {
                    if (dp1_0[pi][pj][pd] > 0)
                        dp2_1[i][j][d] =
                            max(dp2_1[i][j][d], dp1_0[pi][pj][pd] + 1);
                    if (dp0_0[pi][pj][pd] > 0)
                        dp2_1[i][j][d] =
                            max(dp2_1[i][j][d], dp0_0[pi][pj][pd] + 1);
                } else if (v == 0) {
                    if (dp2_0[pi][pj][pd] > 0)
                        dp0_1[i][j][d] =
                            max(dp0_1[i][j][d], dp2_0[pi][pj][pd] + 1);
                }
                ans = max(ans, max(dp2_1[i][j][d], dp0_1[i][j][d]));
            }
        }
    }

public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        DP3D dp1_0 = make3D(m, n, 0);
        DP3D dp2_0 = make3D(m, n, 0);
        DP3D dp0_0 = make3D(m, n, 0);
        int ans = 0;
        buildStraightChains(grid, dp1_0, dp2_0, dp0_0, ans);
        DP3D dp2_1 = make3D(m, n, 0);
        DP3D dp0_1 = make3D(m, n, 0);
        buildTurnChains(grid, dp1_0, dp2_0, dp0_0, dp2_1, dp0_1, ans);
        return ans;
    }
};
