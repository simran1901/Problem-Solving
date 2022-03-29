// Codeforces
// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;

int puzzles(int n, int m, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int res = arr[m - 1] - arr[0];
    for (int i = 0; i + n - 1 < m; i++)
    {
        res = min(res, arr[i + n - 1] - arr[i]);
    }
    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << puzzles(n, m, arr);
}