// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1701/problem/A

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

void solve()
{
    vector<vector<int>> arr(2, vector<int>(2, 0));
    int count = 0;
    rep(i, 2)
    {
        rep(j, 2)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                count++;
        }
    }
    if (count == 0)
        cout << 0 << endl;
    else if (count <= 3 && count >= 1)
        cout << 1 << endl;
    else if (count == 4)
        cout << 2 << endl;
}

int main()
{
    IOS;
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}