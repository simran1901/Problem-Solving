// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1649/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool anyOf(vector<ll> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
            return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<ll>());
    ll x = arr[0];
    for (ll i = 1; i < n; i++)
    {
        x -= arr[i];
    }
    if (anyOf(arr))
    {
        if (x <= 0)
            cout << 1;
        else
            cout << x;
    }
    else
        cout << 0;
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}