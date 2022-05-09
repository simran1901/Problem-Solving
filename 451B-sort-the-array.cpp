// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/451/B

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
    rep(i, n) cin >> arr[i];
    if (n == 1)
    {
        cout << "yes\n1 1\n";
        return;
    }
    int start = 0, end = 0;
    rep(i, n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            start = i;
            while (arr[i] > arr[i + 1] && i < n - 1)
            {
                i++;
            }
            end = i;
            break;
        }
    }
    sort(arr + start, arr + end + 1);
    rep(i, n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n"
         << start + 1 << " " << end + 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}