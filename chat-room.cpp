// Codeforces
// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string hello = "hello";
    string input;
    cin >> input;
    int ptr = 0;
    for (int i = 0; i < input.length() && ptr < 5; i++)
    {
        if (input[i] == hello[ptr])
        {
            ptr++;
        }
    }
    if (ptr == 5)
        cout << "YES";
    else
        cout << "NO";
}