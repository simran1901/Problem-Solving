// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1675/problem/D

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

vector<vector<int>> ans;
 
void dfs(int node, vector<int> tree[], vector<int>& path) {
    path.push_back(node);
    if((int)tree[node].size() == 0) {
        ans.push_back(path);
        return;
    }
    for(int nbr : tree[node]) {
        dfs(nbr, tree, path);
        path.clear();
    }
}
 
void solve() {
    int n;
    cin >> n;
    ans.clear();
    vector<int> tree[n];
    vector<int> p(n);
    int root = 0;
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
        if(i != p[i]) {
            tree[p[i]].push_back(i);
        } else {
            root = i;
        }
    }
    if(n == 1) {
        cout << "1\n1\n1\n\n";
        return;
    }
    vector<int> path;
    dfs(root, tree, path);
    cout << ans.size() << '\n';
    for(auto& f : ans) {
        cout << f.size() << '\n';
        for(auto& e : f) {
            cout << e + 1 << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
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