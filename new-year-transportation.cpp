// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n - 1);
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i - 1];
    }

    for (int i = 0; i < t;)
    {
        if (i == t - 1)
        {
            cout << "YES";
            return;
        }
        i = i + arr[i];
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