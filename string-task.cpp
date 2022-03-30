// Codeforces
// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    set<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};
    string ans = "";
    for (char ch : str)
    {
        if (vowels.find(ch) == vowels.end())
        {
            if (ch - 'A' < 32)
            {
                ch = ch + 32;
            }
            ans = ans + "." + ch;
        }
    }
    cout << ans;
}