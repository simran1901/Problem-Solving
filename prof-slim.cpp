// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1670/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int right = n - 1;
    int left = 0;
    while (left < right)
    {
        if (arr[right] > 0 && arr[left] < 0)
        {
            right--;
            left++;
        }
        else if (arr[right] > 0)
            right--;
        else if (arr[left] < 0)
            left++;
        else
        {
            arr[left] *= -1;
            arr[right] *= -1;
        }
    }
    // is it sorted?
    for (int i = 0; i < n - 1; i++)
    {
        // cout<<arr[i]<<" ";
        if (arr[i] > arr[i + 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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