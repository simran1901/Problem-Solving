// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            int num;
            cin >> num;
            if (num)
                count++;
        }
        if (count >= 2)
            ans++;
    }
    cout << ans << endl;
    return 0;
}