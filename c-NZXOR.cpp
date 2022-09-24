// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/NZXOR

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

void solve()
{
    int n;
    cin >> n;
    v arr(n);
    inpArr(arr, n-1);
    int count = 0;
    int x = -1;
    rep(i,n-1)
    {
        int s = 0;
        pern(j, i, x+1)
        {
            s ^= arr[j];
            if (s == 0)
            {
                count++;
                x = i;
                break;
            }
        }
    }
    cout << count << '\n';
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