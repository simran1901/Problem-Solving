// Codeforces
// Author: simranmakhijani55
//

#include<simran.h>

using namespace std;

const ll sz = 2 * (1e5) + 1;

ll n, c, d, l, r;

bool check(vl &arr, ll m)
{
    ll summ = 0;
    rep(i, min(n, m))
    {
        summ += arr[i];
    }
    ll tempSum = 0;
    rep(i, min(n, d % m))
    {
        tempSum += arr[i];
    }

    ll temp2 = tempSum + d / m * summ;
    if (c <= temp2)
    {
        return true;
    }
    return false;
}

void binarySearch(vl &arr)
{
    sort(arr.rbegin(), arr.rend());
    ll m;
    while (r > l)
    {
        m = l + (r - l + 1) / 2;
        if (!check(arr, m))
        {
            r = m - 1;
        }
        else
        {
            l = m;
        }
    }
}

void solve()
{
    cin >> n >> c >> d;
    l = 0, r = 1e18;
    vl arr(n);
    inpArr(arr, 0, n);

    binarySearch(arr);

    if (l == 1e18)
    {
        cout << "Infinity" << nl;
    }
    else if (l == 0)
    {
        cout << "Impossible" << nl;
    }
    else
    {
        cout << (l - 1) << nl;
    }
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