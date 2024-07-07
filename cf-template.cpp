// Codeforces
// Author: simranmakhijani55
//

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <signal.h>
#include <stdarg.h>
#include <errno.h>
#include <time.h>
#include <float.h>
#include <limits.h>
#include <assert.h>
#include <ctype.h>
#include <locale.h>
#include <setjmp.h>
#include <stddef.h>
#include <stdlib.h>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <algorithm>
#include <vector>

#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl '\n'
#define pl pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define ppb pop_back
#define be(arr) arr.begin(), arr.end()
#define INF numeric_limits<double>::infinity()
#define PI 3.14159265

using namespace std;

template <typename T>
map<T, ll> freqMap(vector<T> arr) {
    map<T, ll> res;

    rep(i, arr.size()) {
        res[arr[i]]++;
    }

    return res;
}

vl prefArr(vl arr) {
    repn(i, 1, arr.size()) {
        arr[i] += arr[i - 1];
    }
    return arr;
}

void solve() {
    
}

int main()
{
    IOS;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}