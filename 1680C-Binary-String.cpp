// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1680/problem/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
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
#define nl '\n'
#define pl pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define ppb pop_back

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = (int)s.size();
    int st = -1;
    int ans = n;
    while (st + 1 < ans)
    {
        int mid = (st + ans) / 2;
        bool flag = false;
        int left0 = 0;
        for (char c : s)
            if (c == '0')
                left0++;
        int rem1 = 0;
        int l = 0;
        while (l < n && left0 > mid)
        {
            if (s[l] == '0')
            {
                left0--;
            }
            else
            {
                rem1++;
            }
            l++;
        }
        if (left0 <= mid && rem1 <= mid)
            flag = true;
        int r = n;
        while (l > 0)
        {
            l--;
            if (s[l] == '0')
            {
                left0++;
            }
            else
            {
                rem1--;
            }
            while (r > l && left0 > mid)
            {
                r--;
                if (s[r] == '0')
                {
                    left0--;
                }
                else
                {
                    rem1++;
                }
            }
            if (left0 <= mid && rem1 <= mid)
                flag = true;
        }
        if (flag)
        {
            ans = mid;
        }
        else
        {
            st = mid;
        }
    }
    cout << ans << nl;
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