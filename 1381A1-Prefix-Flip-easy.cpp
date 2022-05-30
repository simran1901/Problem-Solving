// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1381/A1

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void flip(string &s, int r)
{
    int l = 0;
    while (l <= r)
    {
        if (s[l] == s[r])
        {
            s[l] = s[r] = (s[l] == '1') ? '0' : '1';
        }
        l++;
        r--;
    }
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int right = n - 1;
    vector<int> ans(3 * n);
    int count = 0;
    while (right >= 0)
    {
        if (a[right] != b[right])
        {
            if (a[0] == a[right])
            {
                flip(a, right);
                ans[count] = right + 1;
            }
            else
            {
                flip(a, 0);
                ans[count] = 1;
                count++;
                flip(a, right);
                ans[count] = right + 1;
            }
            count++;
        }
        right--;
    }
    cout << count << " ";
    rep(i, count)
    {
        cout << ans[i] << ' ';
    }
    cout << '\n';
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