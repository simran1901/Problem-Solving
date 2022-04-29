// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

int binarySearch(int arr[], int q, int l, int r)
{
    int mid = l + (r - l) / 2;
    if ((mid == 0 && arr[mid] >= q) || (arr[mid] >= q && arr[mid - 1] < q))
    {
        return mid + 1;
    }
    else if (arr[mid] < q)
    {
        return binarySearch(arr, q, mid + 1, r);
    }

    return binarySearch(arr, q, l, mid - 1);
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, n)
    {
        cin >> arr[i];
        if (i > 0)
            arr[i] += arr[i - 1];
    }
    int m;
    cin >> m;
    int queries[m];
    rep(i, m)
    {
        cin >> queries[i];
        cout << binarySearch(arr, queries[i], 0, n) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}