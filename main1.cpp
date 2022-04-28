// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
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
    int l = 0;
    int r = n - 1;
    int sum = 0;
    int sumLeft = arr[l];
    int sumRight = arr[r];
    while (l <= r)
    {
        if (sumLeft < sumRight)
        {
            sumLeft += arr[++l];
        }
        else if (sumLeft > sumRight)
        {
            sumRight + arr[--r];
        }
        else
        {
            sum = l + n - r;
            l++;
            r--;
        }
    }
    cout << sum << "\n";
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

    return 0;
}