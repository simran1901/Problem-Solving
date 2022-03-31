// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1647/A

#include <bits/stdc++.h>
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
        int sum = 0;
        int times = 0;
        if (n <= 2)
        {
            cout << n << "\n";
            continue;
        }
        while (sum + 3 <= n)
        {
            // add 21
            sum += 3;
            times++;
        }
        if (n - sum == 1)
        {
            cout << 1;
        }
        for (int i = 0; i < times; i++)
        {
            cout << 21;
        }
        if (n - sum == 2)
        {
            cout << 2;
        }
        cout << "\n";
    }
}