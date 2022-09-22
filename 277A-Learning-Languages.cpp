// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/277/A

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
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

using namespace std;

void dfs(int i, vv &empToLang, vv &langToEmp, vector<bool> &empVisited, vector<bool> &langVisited, bool isEmp)
{
    if (isEmp)
    {
        if (empVisited[i])
        {
            return;
        }
        empVisited[i] = true;
        for (int j = 0; j < empToLang[i].size(); j++)
        {
            dfs(empToLang[i][j], empToLang, langToEmp, empVisited, langVisited, !isEmp);
        }
    }
    else
    {
        if (langVisited[i])
        {
            return;
        }
        langVisited[i] = true;
        for (int j = 0; j < langToEmp[i].size(); j++)
        {
            dfs(langToEmp[i][j], empToLang, langToEmp, empVisited, langVisited, !isEmp);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vv empToLang(n), langToEmp(m);
    int k;
    rep(i, n - 1)
    {
        cin >> k;
        empToLang[i] = v(k);
        for (int j = 0; j < k; j++)
        {
            cin >> empToLang[i][j];
            empToLang[i][j]--;
            langToEmp[empToLang[i][j]].push_back(i);
        }
    }

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j < empToLang[i].size(); j++)
    //     {
    //         cout << empToLang[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < langToEmp[i].size(); j++)
    //     {
    //         cout << langToEmp[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    vector<bool> empVisited(n, false);
    vector<bool> langVisited(m, false);

    int ans = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (!empVisited[i])
        {
            ans++;
            if (empToLang[i].size() > 0)
                flag = true;
            dfs(i, empToLang, langToEmp, empVisited, langVisited, true);
        }
    }
    if (flag)
        ans--;
    cout << ans << '\n';
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
