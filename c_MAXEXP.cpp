// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/MAXEXP

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll plus = 0, minus = 0;
    for (ll i = 0; i < n; i++)
    {

        if (s[i] == '+')
            plus++;
        else if (s[i] == '-')
            minus++;
    }

    sort(s.begin(), s.end(), greater<char>());
    // cout << s << endl;

    ll total = plus + minus;
    for (ll i = 0; i < n - total; i++)
    {
        if (i >= n - 2*total)
        {
            if (plus > 0)
            {
                cout << '+';
                plus--;
            }
            else
            {
                cout << "-";
                minus--;
            }
        }
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}