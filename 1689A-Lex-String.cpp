// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1689/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string a, b, c;
    cin >> a >> b;
    int countA = 0, countB = 0;
    int ptr1 = 0, ptr2 = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (ptr1 < n && ptr2 < m)
    {
        if (a[ptr1] < b[ptr2])
        {
            if (countA < k)
            {
                c += a[ptr1];
                ptr1++;
                countA++;
                countB = 0;
            }
            else
            {
                c += b[ptr2];
                ptr2++;
                countB++;
                countA = 0;
            }
        }
        else if (b[ptr2] < a[ptr1])
        {
            if (countB < k)
            {
                c += b[ptr2];
                ptr2++;
                countB++;
                countA = 0;
            }
            else
            {
                c += a[ptr1];
                ptr1++;
                countA++;
                countB = 0;
            }
        }
    }
    cout << c << endl;
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
