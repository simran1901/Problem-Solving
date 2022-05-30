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
    rep(i, n)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    while (l < r)
    {
        // l should be pointed at positive element from left
        // r should be pointed at negative element from right
        while (arr[l] < 0 && l < r)
        {
            l++;
        }

        while (arr[r] > 0 && r > l)
        {
            r--;
        }

        swap(arr[l], arr[r]);
        l++, r--;
    }
    rep(i,n) cout<<arr[i]<<' ';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}