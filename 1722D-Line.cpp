// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1722/problem/D

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
#define inpArr(arr, n) \
    rep(i, n)          \
            cin >>     \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

ll n;

void solve()
{
    cin >> n;
    string s;
    cin >> s;
    // initial value of line
    ll ans = 0;
    rep(i, n - 1)
    {
        if (s[i] == 'L')
        {
            ans += i;
        }
        else
            ans += n - 1 - i;
    }

    ll left = 0, right = n - 1;
    rep(i, n - 1)
    {
        while (s[left] != 'L' && left < n / 2 - 1)
        {
            left++;
        }
        while (s[right] != 'R' && right > n / 2)
        {
            right--;
        }
        // cout<<left<<' '<<right<<endl;

        // compare
        if (s[left] == 'L' && s[right] == 'R')
        {
            if (n - 1 - left >= right)
            {
                ans -= left;
                ans += n - 1 - left;
                s[left] = 'R';
            }
            else
            {
                ans -= n - 1 - right;
                ans += right;
                s[right] = 'L';
            }
        }
        else if (s[left] == 'L')
        {
            ans -= left;
            ans += n - 1 - left;
            s[left] = 'R';
        }
        else if (s[right] == 'R')
        {
            ans -= n - 1 - right;
            ans += right;
            s[right] = 'L';
        }

        cout << ans << ' ';
    }
    cout << '\n';
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