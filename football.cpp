// Codeforces
// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int count = 1;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
            count++;
        else
            count = 1;

        if (count >= 7)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}