#include <bits/stdc++.h>

using namespace std;

using ll = long long;

constexpr int maxn = 201;

vector<vector<int>> adj(maxn);

int n;
vector<int> vis(maxn);

// u: current, p: parent
void dfs(int u)
{
    cout << u << " ";
    vis[u] = 1;

    if (vis[u] == true)
    {
        return;
    }
    // INFO: adj list (list is all values in adj[u] are neibors of node u)
    for (auto v : adj[u])
    {
        if (vis[v])
            continue;
        dfs(v);
    }

    // adj matrix (we dont use for each loop for matrix because you cant get the index from the value)
    // INFO: adj matrix is if adj_matrix[u][v] == 0 that means no edge connecting
    /*
    for (int v = 1; v <= n; v++)
    {
        if (adj2[u][v] == 0)
            continue;
        dfs(v);
    }
    */

    // difference between adj list and adj matrix is that you need to set different init states
    /*
    Matrix starts like {{0,0,0},{0,0,0},{0,0,0}} (if adj_matrix[u][v] == 0 that means no edge connecting)
    list starts like {{},{},{}}
     */
}


void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
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
