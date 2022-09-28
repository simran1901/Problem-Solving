// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1709/problem/C

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

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    int cntQ = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            cntQ++;
        }
        else if (s[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    if (cntQ == abs(count))
    {
        cy;
        return;
    }
    int cntPos = (cntQ - count) / 2;
    bool flag = false;
    rep(i, n)
    {
        if (s[i] == '?')
        {
            if (cntPos > 1)
            {
                s[i] = '(';
                cntPos--;
            }
            else if (cntPos == 1)
            {
                if (flag)
                {
                    s[i] = '(';
                    cntPos--;
                }
                else
                {
                    s[i] = ')';
                    flag = true;
                }
            }
            else
            {
                s[i] = ')';
            }
        }
    }

    count = 0;
    rep(i, n)
    {
        if (s[i] == '(')
            count++;
        else
            count--;
        if (count < 0)
        {
            cy;
            return;
        }
    }
    cn;
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