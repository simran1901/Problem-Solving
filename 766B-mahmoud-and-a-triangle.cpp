// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/766/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll i = 0; i < n - 2; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2] && arr[i] + arr[i + 2] > arr[i + 1] && arr[i + 1] + arr[i + 2] > arr[i])
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}