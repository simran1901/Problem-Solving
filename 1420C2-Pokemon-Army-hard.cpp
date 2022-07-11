// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1420/problem/C2

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void peakCheck(int arr[], int n, int i, ll *ans, int used[])
{
    if ((i == 0 && arr[i + 1] < arr[i]) || (i == n - 1 && arr[i - 1] < arr[i]) || (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]))
    {
        used[i] = 1;
        *ans += arr[i];
        // cout << arr[i] << " gjekrgnve "<<*ans << endl;
    }
    else if (i > 0 && i < n - 1 && arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
    {
        used[i] = -1;
        *ans -= arr[i];
    }
}

void addCheck(int used[], int i, int arr[], ll *ans)
{
    if (used[i] == -1)
        *ans += arr[i];

    else if (used[i] == 1)
        *ans -= arr[i];

    used[i] = 0;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    rep(i, n) cin >> arr[i];
    // find highest and lowest peaks alternatively

    ll ans = 0;
    bool flag = true;
    int used[n];
    memset(used, 0, sizeof(used));

    rep(i, n)
    {
        if (flag)
        {
            if ((i == 0 && arr[i + 1] < arr[i]) || (i == n - 1 && arr[i - 1] < arr[i]) || (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]))
            {
                used[i] = 1;
                ans += arr[i];
                flag = !flag;
            }
        }
        else
        {
            if (i > 0 && i < n - 1 && arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            {
                used[i] = -1;
                ans -= arr[i];
                flag = !flag;
            }
        }
    }
    if (n == 1)
    {
        ans += arr[0];
        used[0] = 1;
    }
    cout << ans << '\n';

    // queries
    int a, b;
    rep(i, q)
    {
        cin >> a >> b;
        a--, b--;
        if (a == b)
        {
            cout << ans << '\n';
            continue;
        }
        addCheck(used, a, arr, &ans);
        addCheck(used, b, arr, &ans);

        swap(arr[a], arr[b]);

        // peak check for a,b and its neighbors

        peakCheck(arr, n, a, &ans, used);

        if (a - 1 >= 0)
        {
            addCheck(used, a - 1, arr, &ans);
            peakCheck(arr, n, a - 1, &ans, used);
        }
        if (a + 1 < n && a + 1 != b)
        {
            addCheck(used, a + 1, arr, &ans);
            peakCheck(arr, n, a + 1, &ans, used);
        }

        peakCheck(arr, n, b, &ans, used);

        if (b - 1 >= 0 && b - 1 != a)
        {
            addCheck(used, b - 1, arr, &ans);
            peakCheck(arr, n, b - 1, &ans, used);
        }
        if (b + 1 < n)
        {
            addCheck(used, b + 1, arr, &ans);
            peakCheck(arr, n, b + 1, &ans, used);
        }
        cout << ans << '\n';
    }
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