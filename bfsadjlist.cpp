#include <bits/stdc++.h>

using namespace std;

using ll = long long;

// global adj list
vector<vector<int>> adj(n + 1);

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> vis(n+1);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s;
    cin >> s; // s = starting point

    vector<int> dist(n + 1, INT_MAX);
    // dist[i] = shortest distance from s to i

    /// dfs test (self = the functions own self which is used to call itself)
    auto dfs = [&](auto self, int u, int p) -> void
    {
        for (auto v : adj[u]){
            if (vis[u]) return;
            // set visited true
            vis[u] = 1;
            self(self,v,u);
        }
    };
    /// bfs test
    auto bfs = [&](auto self, int u, int p) -> void
    {
        queue <int> q;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for ( auto v : adj[u])
            {
                if (dist[v] == INT_MAX)
                {
                    dist[v] = dist[u] + 1;
                    q.push(v);
                }
            }
        }
    };
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
