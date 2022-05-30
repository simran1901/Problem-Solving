// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1466/problem/C

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
    string s;
    cin >> s;
    ll n = s.length();
    bool changed[n];
    memset(changed, false, sizeof(changed));
    ll count = 0;
    repn(i, 1, n)
    {
        // i-1 and i+1 should not be equal, i and i+1 should not be equal
        if (i >= 2)
        {
            // check for 3 and 2 ending at s[i]
            // for two & three
            if ((s[i] == s[i - 1] && !changed[i - 1]) || (!changed[i - 2] && s[i - 2] == s[i]))
            {
                count++;
                changed[i] = true;
            }
        }
        else
        {
            // for two
            if (s[i] == s[i - 1])
            {
                count++;
                changed[i] = true;
            }
        }
    }
    cout << count << '\n';
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