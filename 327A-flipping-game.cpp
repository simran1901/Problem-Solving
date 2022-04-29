// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/327/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count1 = 0, count0 = 0, maxCount = -1;
    rep(i, n)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            count1++;
            if (count0 > 0)
                count0--;
        }
        else
        {
            count0++;
            if (maxCount < count0)
            {
                maxCount = count0;
            }
        }
    }
    cout << count1 + maxCount;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}