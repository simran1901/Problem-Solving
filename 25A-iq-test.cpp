// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/25/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int index = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((arr[i] % 2) != (arr[0] % 2))
        {
            index = i + 1;
            count++;
        }
        if (count > 1)
        {
            cout << 1 << '\n';
            return;
        }
    }
    cout << index << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}