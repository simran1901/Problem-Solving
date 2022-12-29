#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long Count(long long n)
{
    long long ret = 0;
    for (int x = 0; x <= 2; x++)
    {
        long long low = 0;
        long long high = (long long)2e9;
        while (low < high)
        {
            long long mid = (low + high + 1) >> 1;
            if (mid * (mid + x) > n)
            {
                high = mid - 1;
            }
            else
            {
                low = mid;
            }
        }
        ret += low;
    }
    return ret;
}

void solve()
{
    long long l, r;
    cin >> l >> r;
    cout << Count(r) - Count(l - 1) << '\n';
}
signed main()
{
    ll T = 1;
    cin >> T;
    while (T--)
        solve();
}