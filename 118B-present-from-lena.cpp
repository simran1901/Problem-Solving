// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/118/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    // top tower
    for (int i = 0; i <= n; i++)
    {
        // print spaces
        for (int k = 0; k < n - i; k++)
            cout << "  ";
        int j;
        for (j = 0; j < i; ++j)
        {
            cout << j << " ";
        }
        for (; j >= 0; --j)
        {
            cout << j;
            if (j > 0)
                cout << " ";
        }
        cout << "\n";
    }
    // bottom tower
    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int k = 0; k < i; k++)
            cout << "  ";
        int j;
        for (j = 0; j < n - i; ++j)
        {
            cout << j << " ";
        }
        for (; j >= 0; --j)
        {
            cout << j;
            if (j > 0)
                cout << " ";
        }
        
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}