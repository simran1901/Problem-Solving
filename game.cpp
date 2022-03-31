// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1649/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while (arr[i] != 0 && i < n)
    {
        i++;
    }
    int j = n - 1;
    while (arr[j] != 0 && j >= i)
    {
        j--;
    }
    if (j > i)
        cout << j - i + 2 << "\n";
    else if (j == i)
        cout << 2 << "\n";
    else
        cout << 0 << "\n";
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