// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1333/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    char prev = 'W';
    for (int r = 0; r < n; r++)
    {
        char prevPrev = prev == 'W' ? 'B' : 'W';
        for (int c = 0; c < m; c++)
        {
            if (r == n - 1 && c == m - 1 && ((n % 2 != 0 && m % 2 == 0) || (n % 2 == 0 && m % 2 != 0)))
            {
                cout << 'B';
                break;
            }
            else if (n % 2 == 0 && m % 2 == 0 && r == n - 1 && c == m - 2)
            {
                prev = 'W';
                cout << 'B';
                continue;
            }
            if (prev == 'W')
            {
                prev = 'B';
            }
            else
            {
                prev = 'W';
            }
            cout << prev;
        }
        cout << "\n";
        prev = prevPrev;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}