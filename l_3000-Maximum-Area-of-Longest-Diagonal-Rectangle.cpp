// https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/?envType=daily-question&envId=2025-08-26

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int mxDiagonal = 0, mxArea = 0;

        for (const auto& dim : dimensions) {
            int diag = dim[0] * dim[0] + dim[1] * dim[1];
            int area = dim[0] * dim[1];
            if (diag > mxDiagonal) {
                mxDiagonal = diag;
                mxArea = area;
            } else if (diag == mxDiagonal) {
                mxArea = max(mxArea, area);
            }
        }

        return mxArea;
    }
};
