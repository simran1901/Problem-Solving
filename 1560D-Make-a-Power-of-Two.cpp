// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1560/D

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
    int N = 60;
    ll powers[N];
    powers[0] = 1;
    repn(i, 1, N)
    {
        powers[i] = powers[i - 1] * 2;
    }

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll ptr1 = 0, ptr2 = 0, sl = s.length(), pl;
        string p;
        ll ans = INT_MAX;
        // iterate powers array
        for (ll i = 0; i < N; i++)
        {
            ptr1 = 0, ptr2 = 0;
            p = to_string(powers[i]);
            // cout << p << endl;
            pl = p.length();
            while (ptr1 < sl && ptr2 < pl)
            {
                if (s[ptr1] == p[ptr2])
                {
                    ptr1++;
                    ptr2++;
                }
                else
                {
                    ptr1++;
                }
            }
            // cout << p << " " << ptr2 <<endl;
            // numbers to be added = pl - ptr2
            // numbers to be removed = sl - ptr2
            ans = min(ans, pl + sl - 2 * ptr2);
        }
        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}