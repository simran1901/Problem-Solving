// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1650/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string str, ch;
        cin >> str;
        cin >> ch;
        int countA = 0;
        int countB = 0;
        bool found = false;
        int len = str.length();
        for (int i=0; i<len; i++){
            if (str[i] == ch[0]) {
                if (i%2==0 && (len-1-i)%2==0) {
                    cout<<"YES\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found) cout<<"NO\n";

    }
}