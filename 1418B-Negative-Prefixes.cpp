// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int fixed[n];
    int sortedArr[n];

    int count = 0;
    rep(i, n)
    {
        cin >> arr[i];
    }
    rep(i, n)
    {
        cin >> fixed[i];
        if (fixed[i] == 0)
        {
            sortedArr[count++] = arr[i];
        }
    }
    sort(sortedArr, sortedArr + count, greater<int>());
    int ptr = 0;
    rep(i, n)
    {
        if (fixed[i] == 0)
        {
            cout << sortedArr[ptr++] << " ";
        }
        else
        {
            cout << arr[i] << ' ';
        }
    }
    cout << '\n';
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