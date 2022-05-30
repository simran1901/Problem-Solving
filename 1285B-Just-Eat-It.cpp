// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1285/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll minIndex, maxIndex;
    rep(i, n)
    {
        cin >> arr[i];
        if (i > 0)
        {
            arr[i] += arr[i - 1];

            if (arr[i] > arr[maxIndex])
            {
                maxIndex = i;
            }
        }
        else
        {
            maxIndex = i;
        }
    }

    minIndex = min_element(arr, arr + maxIndex + 1) - arr;

    if (arr[minIndex] > 0 && maxIndex == n - 1)
    {
        cy;
    }
    else
    {
        ll adel = arr[maxIndex];
        if (arr[minIndex] <= 0)
        {
            adel -= arr[minIndex];
        }
        if (arr[n - 1] > adel)
        {
            cy;
        }
        else
        {
            cn;
        }
    }
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