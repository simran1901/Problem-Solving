// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1520/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 2)
        cout << -1 << "\n";
    else
    {
        int cnt = 1;
        // odd loop
        for (int i = 1; i <= n * n; i++)
        {
            cout << cnt << " ";
            cnt += 2;
            if (i % n == 0)
                cout << "\n";
            if (cnt > n * n)
                cnt = 2;
        }
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