// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int size = str.length();
        if (size > 10)
        {
            str = str[0] + to_string(size - 2) + str[size - 1];
        }
        cout << str << endl;
    }
}