// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/508/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    // swap first distinct even number less than with last odd digit
    string num;
    cin >> num;
    ll n = num.length();
    ll a = -1;
    rep(i, n - 1)
    {
        if ((num[i] - '0') % 2 == 0)
        {
            a = i;
            if (num[i] < num[n - 1])
            {
                swap(num[i], num[n - 1]);
                cout << num << '\n';
                return;
            }
        }
    }
    if (a != -1)
    {
        swap(num[n - 1], num[a]);
        cout << num << '\n';
        return;
    }

    cout << -1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}