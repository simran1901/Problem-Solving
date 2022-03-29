// Codeforces
// https://codeforces.com/contest/1657/problem/B

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
        int n, bet, p, q;
        cin >> n >> bet >> p >> q;
        long long s = 0;
        int arr[n];
        arr[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i - 1] + p <= bet)
            {
                arr[i] = arr[i - 1] + p;
            }
            else
            {
                arr[i] = arr[i - 1] - q;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            s += arr[i];
        }
        cout << s << '\n';
    }
}