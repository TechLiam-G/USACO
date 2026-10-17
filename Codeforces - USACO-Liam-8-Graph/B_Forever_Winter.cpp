//  B. Forever Winter
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> degree(n + 1, 0);
    vector<vector<int>> adj(n + 1);
    
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    
    vector<int> leaf_counts(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        if (degree[i] == 1) {
            int neighbor = adj[i][0];
            leaf_counts[neighbor]++;
        }
    }
    
    int x = 0;
    int y = 0;
    for (int i = 1; i <= n; ++i) {
        if (leaf_counts[i] > 0) {
            x++;
            y = leaf_counts[i];
        }
    }
    
    cout << x << " " << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
