// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string first, second;
    cin >> first >> second;
    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] > 90)
            first[i] -= 32;
        if (second[i] > 90)
            second[i] -= 32;

        if (first[i] < second[i])
        {
            cout << "-1\n";
            return 0;
        }
        else if (first[i] > second[i])
        {
            cout << "1\n";
            return 0;
        }
    }
    cout << "0\n";
}