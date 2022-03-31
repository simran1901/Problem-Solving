// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1656/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll mi = 1000000001, ma = -1;
        int mii[2] = {1};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > ma)
            {
                ma = arr[i];
                mii[1] = i + 1;
            }
            if (arr[i] < mi)
            {
                mi = arr[i];
                mii[0] = i + 1;
            }
        }
        sort(mii, mii + 1);
        cout << mii[0] << " " << mii[1] << "\n";
    }
}