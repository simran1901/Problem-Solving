// This question was asked in Juspay round 3 for front end dev

// Print preorder traversal of subtree of node S

#include <bits/stdc++.h>
using namespace std;

void preorder(vector<vector<int>> &tree, int node, bool flag, int s)
{
    flag |= (node == s);
    if (flag)
        cout << node << " ";
    if (tree[node][0] != -1)
        preorder(tree, tree[node][0], flag, s);
    if (tree[node][1] != -1)
        preorder(tree, tree[node][1], flag, s);
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> tree(n, vector<int>(2, -1));

    for (int i = 0; i < n - 1; i++)
    {
        int u, v, d;
        cin >> u >> v >> d;
        tree[u][d] = v;
    }

    int s;
    cin >> s;
    preorder(tree, 0, s == 0, s);
    cout << endl;
}