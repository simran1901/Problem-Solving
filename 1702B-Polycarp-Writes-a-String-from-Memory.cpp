// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1702/problem/B

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
    string s;
    cin >> s;
    int st = 0, end = 0;
    int n = s.length();
    int count = 0;
    set<char> sett;
    for (int i = 0; i < n; i++)
    {
        if (sett.find(s[i]) == sett.end())
        {
            if (sett.size() == 3)
            {
                sett.clear();
                count++;
            }
            sett.insert(s[i]);
        }
    }
    if (sett.size() > 0)
        count++;
    cout << count << endl;
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