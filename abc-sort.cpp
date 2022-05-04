// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1674/problem/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> sortedArr(n);
    rep(i, n) cin >> sortedArr[i];
    vector<int> arr(sortedArr);
    sort(sortedArr.begin(), sortedArr.end());
    for (int i = n - 1; i > 0; i -= 2)
    {
        if (arr[i - 1] > arr[i])
            swap(arr[i - 1], arr[i]);
    }
    if (arr == sortedArr)
        cout << "YES\n";
    else
        cout << "NO\n";
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