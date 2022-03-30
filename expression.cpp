// Codeforces
// https://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a + b + c, a * b * c, a * b + c, a + b * c, a * (b + c), (a + b) * c};
    cout << *max_element(arr, arr + 6);
}