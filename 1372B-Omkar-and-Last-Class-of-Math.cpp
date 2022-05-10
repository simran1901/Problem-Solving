// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1372/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 1, b = n - 1;
    if (n % 2)
    {
        for (int i = 3; i <= sqrt(n); i++)
        {
            // find integer
            if (n % i == 0)
            {
                a = n / i;
                b = n - n / i;
                break;
            }
        }
    }
    else
    {
        a = n / 2;
        b = a;
    }
    cout << a << " " << b << "\n";
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