// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

ll traverse(vv &tree, ll node, v &nodes)
{
    // mark node
    ll s = tree[node].size();
    // cout<<s<<" "<<endl;
    ll temp = 0;
    for (ll i = 0; i < s; i++)
    {
        temp += traverse(tree, tree[node][i], nodes) + 1;
    }
    // cout<<temp<<" ";
    return nodes[node] = temp;
}

void infection(vv &tree, ll node, v &nodes, ll &ans)
{
    // root
    // if root is infected, get max subtree add max-1 to ans
    int s = tree[node].size();
    if (s == 0)
    {
        return;
    }
    else if (s == 1)
    {
        ans += max(0 * 1ll, nodes[tree[node][0]]);
        return;
    }
    else
    {
        if (nodes[tree[node][0]] > nodes[tree[node][1]])
        {
            ans += max(0 * 1ll, nodes[tree[node][0]]);
            infection(tree, tree[node][1], nodes, ans);
        }
        else if (nodes[tree[node][0]] < nodes[tree[node][1]])
        {
            ans += max(0 * 1ll, nodes[tree[node][1]]);
            infection(tree, tree[node][0], nodes, ans);
        }
        else {
            
        }
    }
    // traverse lower
    // left
    // right
}

void solve()
{
    ll n;
    cin >> n;
    vv tree(n, v());
    v nodes(n, 0);
    rep(i, n - 1)
    {
        ll p, m;
        cin >> p >> m;
        p--, m--;
        tree[p].push_back(m);
    }
    // rep(i, n) cout<<nodes[i] << " ";
    // count nodes in each subtree
    // rep(i, n)
    // {
    //     rep(j, tree[i].size()) cout << tree[i][j] << " ";
    //     cout << endl;
    // }
    traverse(tree, 0, nodes);
    ll ans = 0;
    infection(tree, 0, nodes, ans);
    // rep(i, n) cout << nodes[i] << " ";
    cout << ans << endl;
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
