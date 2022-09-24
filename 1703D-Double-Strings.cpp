// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1703/problem/D

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
    ll n;
    cin >> n;
    vector<string> vec(n);
    set<string> sett;
    rep(i, n)
    {
        cin >> vec[i];
        sett.insert(vec[i]);
    }
    vector<int> arr(n, 0);
    rep(i, n)
    {
        // check if all the suffix of s are present
        repn(j, 1, vec[i].length() + 1)
        {
            if (sett.find(vec[i].substr(0, j)) != sett.end())
            {
                if (sett.find(vec[i].substr(j, vec[i].length() - j)) != sett.end())
                {
                    arr[i] = 1;
                    break;
                }
            }
        }
    }
    rep(i, n) cout << arr[i];
    cout << endl;
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