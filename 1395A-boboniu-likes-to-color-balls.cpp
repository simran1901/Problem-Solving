// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1395/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll arr[4];
    int odd = 0, even = 0;
    rep(i, 4)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            odd++;
        else
            even++;
    }
    if (even >= 3 || (odd >= 3 && !(arr[0] == 0 || arr[1] == 0 || arr[2] == 0)))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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