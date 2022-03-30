// Codeforces
// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isChanged(string str)
{
    for (int i = str.length() - 1; i > 0; i--)
    {
        if (str[i] - 'A' >= 32)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    if (isChanged(str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] - 'A' >= 32)
                str[i] -= 32;
            else
                str[i] += 32;
        }
    }

    cout << str;
}