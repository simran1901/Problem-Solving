// Codeforces
// https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>
using namespace std;

string dubstep(string str)
{
    string ans = "";
    int i = 0;
    while (i < str.length())
    {
        while (i + 2 < str.length() && str.substr(i, 3) == "WUB")
        {
            i += 3;
        }
        // take input until either you reach end or you encounter wub
        while (i < str.length())
        {
            if (i + 2 < str.length() && str.substr(i, 3) == "WUB")
                break;
            ans += str[i];
            i++;
        }
        ans += " ";
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << dubstep(str);
}