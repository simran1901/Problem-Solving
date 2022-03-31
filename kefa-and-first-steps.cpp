// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ans = 1, count = 1;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (arr[i] >= arr[i - 1])
            {
                count++;
                ans = max(ans, count);
            }
            else
            {
                count = 1;
            }
        }
    }
    cout << ans << "\n";
}