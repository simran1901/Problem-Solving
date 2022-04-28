// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/158/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    int current = 0;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (current == 0)
        {
            current += arr[right];
        }
        if (current + arr[left] < 4)
        {
            current += arr[left];
            if (left == right)
                count++;
            left++;
        }
        else if (current + arr[left] > 4)
        {
            right--;
            count++;
            current = 0;
        }
        else if (current + arr[left] == 4)
        {
            left++;
            right--;
            current = 0;
            count++;
        }
    }
    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}