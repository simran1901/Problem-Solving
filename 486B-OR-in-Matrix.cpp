// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/486/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<int> rows(m, 1);
    vector<int> cols(n, 1);
    vector<vector<int>> matrix(m, vector<int>(n));

    int count = 0;
    rep(i, m)
    {
        rep(j, n)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0)
            {
                rows[i] = 0;
                cols[j] = 0;
            }
            else
                count++;
        }
    }
    if (count > 0)
    {
        if (all_of(rows.begin(), rows.end(), [](int i)
                   { return i == 0; }))
        {
            cn;
            return;
        }
        else if (all_of(cols.begin(), cols.end(), [](int i)
                        { return i == 0; }))
        {
            cn;
            return;
        }
    }

    rep(i, m)
    {
        rep(j, n)
        {
            if (matrix[i][j] == 1)
            {
                bool a = true;
                if (i - 1 >= 0)
                    if (matrix[i - 1][j] == 0)
                        a = false;

                if (i + 1 < m)
                    if (matrix[i + 1][j] == 0)
                        a = false;

                bool b = true;
                if (j - 1 >= 0)
                    if (matrix[i][j - 1] == 0)
                        b = false;
                if (j + 1 < n)
                    if (matrix[i][j + 1] == 0)
                        b = false;

                if (!(a | b))
                {
                    cn;
                    return;
                }
            }
        }
    }
    cy;
    rep(i, m)
    {
        rep(j, n)
        {
            cout << (rows[i] & cols[j]) << " ";
        }
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}