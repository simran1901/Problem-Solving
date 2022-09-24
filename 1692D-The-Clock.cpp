// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

bool isPal(string s)
{
    if (s[0] == s[4] && s[1] == s[3])
        return true;
    return false;
}

void solve()
{
    string s;
    int x;
    cin >> s >> x;
    string curr = s;
    int ans = 0;
    do
    {
        // cout<<curr.substr(3, 2);
        int minutes = (curr[3] - '0') * 10 + (curr[4] - '0');
        int temp = x + minutes;
        minutes = (temp) % 60;
        int hours = stoi(curr.substr(0, 2));
        hours = (hours + temp / 60) % 24;

        string hr = to_string(hours);
        if (hr.length() < 2)
        {
            for (int i = 0; i < 2 - hr.length(); i++)
            {
                hr = '0' + hr;
            }
        }
        string mi = to_string(minutes);
        if (mi.length() < 2)
        {
            for (int i = 0; i < 2 - mi.length(); i++)
            {
                mi = '0' + mi;
            }
        }
        curr = hr + ":" + mi;
        // cout << curr << endl;
        if (isPal(curr))
            ans++;
    } while (curr != s);

    cout<< ans << '\n';
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
