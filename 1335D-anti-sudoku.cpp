// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1335/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

string sudoku[9];

void solve()
{
    for (int i = 0; i < 9; i++)
    {
        cin >> sudoku[i];
    }
    int rows[] = {1, 3, 2, 5, 6, 0, 4, 7, 8};
    int cols[] = {0, 2, 3, 5, 6, 8, 7, 1, 4};
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[rows[i]][cols[i]] == '1')
            sudoku[rows[i]][cols[i]] = '2';
        else
            sudoku[rows[i]][cols[i]] = '1';
    }
    for (int i = 0; i < 9; i++)
    {
        cout << sudoku[i] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}