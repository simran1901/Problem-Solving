// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1037/C

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
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    ll cost = 0;
    s += '0';
    t += '0';
    rep(i, n)
    {
        if (s[i] != t[i])
        {
            if (s[i + 1] != t[i + 1])
            {
                if (s[i] == s[i + 1])
                {
                    cost++;
                    s[i] = s[i] == '1' ? '0' : '1';
                }
                else
                {
                    swap(s[i], s[i + 1]);
                    cost++;
                    i++;
                }
            }
            else
            {
                cost++;
            }
        }
    }

    cout << cost << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}