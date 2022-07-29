#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void convertOneStringToAnother()
{
    int m, n;
    cin >> m >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int LCS[m + 1][n + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                LCS[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
            }
            else
                LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
        }
    }
    cout << m + n - 2 * LCS[m][n] << endl;
}

// int ncr(int n, int r) {
//     if (r>n) return 0;
//     if (r==0 || r==n) return 1;
//     if (dp[n][r]!=-1) return dp[n][r];
//     return ncr(n-1, r) + ncr(n-1, r-1);
// }

// dp[n+1][m+1]
// int maxValueOfFish(int i, int j, int n, int m)
// {
//     if (i < 0 || j < 0)
//         return 0;

//     if (dp[i][j] != -1)
//         return dp[i][j];
//     return max(maxValueOfFish(i, j - 1, n, m), maxValueOfFish(i - 1, j, n, m)) + grid[i][j];
// }

// int divide()
// {
//     int n;
//     cin >> n;
//     return pow(2, n) - 2;
// }

// int arr[] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int helper(int i, int sum, vector<vector<int>> &dp)
// {
//     if (sum == 0)
//     {
//         return 1;
//     }
//     if (sum < 0)
//         return 0;
//     if (i < 0)
//         return 0;
//     if (dp[i][sum] != -1)
//         return dp[i][sum];
//     return dp[i][sum] = helper(i - 1, sum, dp) + helper(i - 1, sum - arr[i], dp);
// }

// void numWaysOfDividing()
// {

//     int totalSum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         totalSum += arr[i];
//     }
//     vector<vector<int>> dp(10, vector<int>(totalSum, -1));
//     // req sum = totalsum / 2
//     cout << helper(9, totalSum / 2, dp);
// }

int main()
{
    IOS;
    // numWaysOfDividing();
    return 0;
}