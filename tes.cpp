#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
    int n, m;

    cin >> n >> m;

    // if we use u,v then it's the node index(name)
    // if we use i,j.. then it's the array index(place)
    // nodes are 1,2,3,...,n
    // adj[0], adj[1], ..., adj[n]
    vector<vector<int>> adj(n + 1); // 1-indexed -> size at least n+1
    // Q1: type of adj[u]? type of adj[u][0]?
    // A1: vector<int> and int.
    // we use adj[u][j] to store a neighbor of u
    // int v = adj[u][j];
    // Q2: meaning for adj[u]?
    // A2: it's a list of neighbors of vector u


    // n nodes, m edges
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        // there's an edge between node u and node v
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // T1: print all the neighbors of node x in a line;
    int x = 10;
    for (int i: adj[x])
    {
        cout << i << " ";
    }

    return;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
