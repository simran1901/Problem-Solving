// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1358/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int grannies = n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > grannies)
            grannies--;
        else
            break;
    }
    cout << grannies + 1 << "\n";
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

    return 0;
}