// Codeforces
// Author: simranmakhijani55

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// void solve()
// {
//     int n;
//     cin>>n;
//     cout<<"Division ";
//     if (n>=1900) cout<<"1\n";
//     else if (n>=1600) cout<<"2\n";
//     else if (n>=1400) cout<<"3\n";
//     else cout<<"4\n";
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     int temp = arr[0];
//     int count = 1;
//     int ans = -1;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == temp)
//         {
//             count++;
//             if (count >= 3)
//             {
//                 ans = arr[i];
//                 break;
//             }
//         }
//         else
//         {
//             count = 1;
//             temp = arr[i];
//         }
//     }
//     cout << ans << "\n";
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if ((i % 2 == 0 && arr[i] % 2 != arr[0] % 2) || (i % 2 != 0 && arr[i] % 2 != arr[1] % 2))
//         {
//             cout << "NO\n";
//             return;
//         }
//     }
//     cout << "YES\n";
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int countR = 0, countB = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == 'W')
//         {
//             if ((countR == 0 && countB != 0) || (countR != 0 && countB == 0))
//             {
//                 cout << "NO\n";
//                 return;
//             }
//             countR = 0;
//             countB = 0;
//         }
//         else
//         {
//             if (s[i] == 'B')
//                 countB++;
//             else
//                 countR++;
//         }
//     }
//     if ((countR == 0 && countB != 0) || (countR != 0 && countB == 0))
//     {
//         cout << "NO\n";
//         return;
//     }
//     cout << "YES\n";
// }

int factorial(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void solve()
{
    ll n;
    cin >> n;
    ll first[11] = {0}, second[11] = {0};
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << first[i] << "     ";
    // }
    set<string> sett;
    for (ll i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        if (sett.find(temp) == sett.end())
        {
            first[temp[0] - 'a']++;
            second[temp[1] - 'a']++;
            sett.insert(temp);
        }
    }

    ll ans = 0;
    for (int i = 0; i < 11; i++)
    {
        // cout << first[i] << "\n";
        if (first[i] > 1)
            ans += nCr(first[i], 2);
        if (second[i] > 1)
            ans += nCr(second[i], 2);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}