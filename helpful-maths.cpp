// Codeforces
// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> arr(3, 0);
    int count = 0;
    for (char ch : str)
    {
        if (ch != '+')
        {
            count++;
            arr[ch - '0' - 1]++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << i + 1;
            count--;
            if (count > 0)
                cout << "+";
        }
    }
}