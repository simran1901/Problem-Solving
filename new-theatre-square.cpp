// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1359/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    bool flag = 2 * x > y;
    int count = 0;
    ll ans = 0;
    char temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            if (temp == '.')
                count++;
            else
            {
                if (flag)
                {
                    ans = ans + (count / 2) * y + (count % 2) * x;
                }
                else
                {
                    ans = ans + count * x;
                }
                count = 0;
            }
        }
        if (count)
        {
            if (flag)
                ans = ans + (count / 2) * y + (count % 2) * x;

            else
                ans = ans + count * x;
            count = 0;
        }
    }
    cout << ans << "\n";
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