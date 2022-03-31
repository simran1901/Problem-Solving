// Codeforces
// https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int s, n;
    cin >> s >> n;
    vector<vector<int>> arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] >= s)
        {
            cout << "NO\n";
            return;
        }
        s += arr[i][1];
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}