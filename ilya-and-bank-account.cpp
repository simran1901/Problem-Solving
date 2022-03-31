// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/313/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount;
    if (amount > 0)
    {
        cout << amount;
    }
    else
    {
        if (amount >= -10)
        {
            cout << 0;
        }
        else
        {
            amount = (amount / 100) * 10 + max(amount % 10, (amount % 100) / 10);
            cout << amount;
        }
    }
}