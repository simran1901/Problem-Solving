// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1352/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<int>>
#define v vector<int>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, n) cin >> arr[i];
    int prev = 0, curr = 0, i = 0, sumA(0), sumB(0);
    int left = 0, right = n - 1;
    while (left <= right)
    {
        curr = 0;
        if (i % 2 == 0)
        {
            while (curr <= prev && left <= right)
            {
                curr += arr[left];
                left++;
            }
            sumA += curr;
        }

        else
        {
            while (curr <= prev && left <= right)
            {
                curr += arr[right];
                right--;
            }
            sumB += curr;
        }
        prev = curr;
        i++;
    }
    cout << i << " " << sumA << " " << sumB << "\n";
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