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
    bool changed = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "YES\n";
        return;
    }

    // handle first case seperately
    if (arr[1] - arr[0] >= 2)
    {
        arr[0]++;
        changed = true;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] > 3 || (arr[i] - arr[i - 1] > 2 && changed))
        {
            cout << "NO\n";
            return;
        }
        if (arr[i] - arr[i - 1] == 1)
            continue;

        else if (arr[i] - arr[i - 1] == 3)
        {
            if (changed)
            {
                cout << "NO\n";
                return;
            }
            else
            {
                arr[i]--;
                arr[i - 1]++;
                changed = true;
            }
        }
        else if (arr[i] - arr[i - 1] == 2)
        {
            if (changed)
                arr[i]--;
            else
            {
                arr[i - 1]++;
                changed = true;
            }
        }
        // else
        // {
        //     cout << "NO\n";
        //     return;
        // }
    }
    cout << "YES\n";
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