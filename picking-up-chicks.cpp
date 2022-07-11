// https://www.spoj.com/problems/GCJ101BB/
// wrong

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
    ll n, k, b, t;
    cin >> n >> k >> b >> t;
    ll swaps = 0;
    ll distance[n], speed[n];
    rep(i, n)
    {
        cin >> distance[i];
        distance[i] = b - distance[i];
    }
    rep(i, n)
    {
        cin >> speed[i];
    }
    for (ll i = n - 1; i >= 0 && k > 0; i--)
    {
        if ((double)distance[i] / speed[i] > (double)t)
        {
            // check with prev
            if (i > 0 && (double)distance[i] / speed[i - 1] <= (double)t)
            {
                swap(speed[i], speed[i - 1]);
                k--;
            }
            swaps++;
        }
        else
            k--;
    }
    if (k > 0)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    cout << swaps << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
