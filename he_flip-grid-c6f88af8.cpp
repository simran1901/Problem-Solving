// Hackerearth
// Author: simranmakhijani55
// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/flip-grid-c6f88af8/

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl '\n'

using namespace std;

void rotate(vector<string> &matrix)
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            char temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void checkByRow(vector<string> &matrix, vector<string> &matrixB, int &ans, int &mn)
{
    int n = 4;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (matrix[i] == matrixB[i])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == matrixB[i][j])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            break;
        }
        else
        {
            ans++;
        }
    }
    if (flag)
        mn = min(mn, ans);
}

void checkByCol(vector<string> &matrix, vector<string> &matrixB, int &ans, int &mn)
{
    int n = 4;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int equal = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[j][i] == matrixB[j][i])
                equal++;
        }
        if (equal == 0 || equal == n)
        {
            if (equal == 0)
                ans++;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
        mn = min(mn, ans);
}
void solve()
{
    int n = 4;
    vector<string> matrix(n);
    vector<string> matrixB(n);
    for (int i = 0; i < n; i++)
    {
        cin >> matrix[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> matrixB[i];
    }

    int mn = 10000;

    int ans = 0;
    // check by row
    checkByRow(matrix, matrixB, ans, mn);

    ans = 0;
    // check by column
    checkByCol(matrix, matrixB, ans, mn);

    for (int i = 1; i < n; i++)
    {
        rotate(matrix);
        ans = i;
        checkByRow(matrix, matrixB, ans, mn);
        ans = i;
        checkByCol(matrix, matrixB, ans, mn);
    }
    if (mn == 10000)
        mn = -1;
    cout << mn << '\n';
}
int main()
{
    solve();
    return 0;
}